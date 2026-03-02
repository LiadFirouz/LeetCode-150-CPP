# 26. Remove Duplicates from Sorted Array

## Strategy: Tracking Value Changes
In this approach, I used a manual tracking variable `last_num` to detect when a new unique element appears in the sorted array. 
- **Iteration**: The loop traverses the entire array, comparing each element `nums[i]` to the `last_num` stored from the previous iteration.
- **In-place Update**: When a change is detected (`nums[i] != last_num`), the new value is written to the position indicated by the write-pointer `k`.
- **Pointer Management**: `k` starts at 1, assuming the first element is already in its correct place as the first unique value.

## Complexity
- **Time Complexity:** O(n) - Single linear scan of the input vector.
- **Space Complexity:** O(1) - No additional data structures; only a few integer variables are used.

## Technical & Security Insights (C++)
- **Defensive Guard**: The check `if(nums.size() > 0)` is a critical safety measure. In C++, accessing `nums[0]` on an empty vector is Undefined Behavior and a common source of memory corruption vulnerabilities (like the Heap Buffer Overflow encountered during testing).
- **State Management**: Using `last_num` provides a clear logical separation between the current value and the previous one. However, it requires careful synchronization within the loop to update the state correctly at each step.
- **Memory Integrity**: By returning `k`, we define the new "logical size" of the array, ensuring that the system only processes valid, unique data while the physical memory remains allocated.