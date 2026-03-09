# 238. Product of Array Except Self

## Strategy: Prefix & Suffix Accumulation
To solve this without division and in $O(n)$, we split the product into two parts: everything to the left of the element and everything to the right.

### The Algorithm:
1. **Left Pass (Prefix)**:
   - Create an `ans` array where `ans[i]` contains the product of all elements to the left of `i`.
   - Initialize `ans[0] = 1`.
   - Iterate forward: `ans[i] = ans[i-1] * nums[i-1]`.
2. **Right Pass (Suffix)**:
   - Use a single variable `right` (initialized to 1) to track the product of all elements to the right of `i`.
   - Iterate backward: Multiply `ans[i]` by `right`, then update `right = right * nums[i]`.

## Complexity
- **Time Complexity:** $O(n)$ - Two linear passes.
- **Space Complexity:** $O(1)$ extra space (excluding the output array).

## Key Takeaway
Avoiding division makes the code robust against zeros and potentially faster in low-level systems where division is a heavy CPU operation.