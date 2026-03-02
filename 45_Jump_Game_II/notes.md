# 45. Jump Game II (Minimum Jumps)

## Strategy: Greedy Windows
We treat the problem as a series of "jump ranges". We want to know the fewest number of ranges needed to cover the distance to the last index.

### Key Variables:
- `farthest`: The absolute furthest index reachable from current and previous positions.
- `currentEnd`: The end of the range of the current jump.
- `jumps`: Count of jumps made.

### The Algorithm:
- Iterate through `nums` (up to `n-1`):
    1. Always update `farthest = max(farthest, i + nums[i])`.
    2. When `i` reaches `currentEnd`, it means we must take another jump to reach the next "farthest" point we discovered.
    3. Increment `jumps` and set `currentEnd = farthest`.

## Complexity
- **Time Complexity:** O(n) - Single pass.
- **Space Complexity:** O(1) - Constant variables.