# 80. Remove Duplicates from Sorted Array II (Generalized Approach)

## Strategy: Look-back with Constant N
In this problem, the goal is to allow up to `N` occurrences of each element (where `N=2`). 
- **The Core Logic**: We use a two-pointer approach where the fast pointer `i` scans the array, and the slow pointer `k` manages the writing position.
- **Comparison**: Instead of comparing the current element to its immediate predecessor, we compare `nums[i]` to `nums[k-N]`. If they are different, it guarantees that we haven't exceeded the allowed count of that specific value in our result set.

## Complexity
- **Time Complexity:** O(n) - Single pass through the input vector.
- **Space Complexity:** O(1) - Performed in-place with no additional containers.

## Technical & Security Insights (C++)
- **Preprocessor vs. Constants**: Using `#define` for constants like `N` is a legacy C approach. In modern C++, `const int N = 2;` or `constexpr` is preferred for type safety and better debugging.
- **Boundary Conditions & Return Values**: A critical logic error identified was returning a fixed value `k=N` when the array is small. In C++, returning a size larger than the actual allocated memory can lead to **Heap Buffer Overflows** when the calling function attempts to read the result.
- **Defensive Guard**: Always ensure the function handles cases where `nums.size() <= N` by returning the actual size immediately, preventing out-of-bounds access during the initial comparison `nums[k-N]`.