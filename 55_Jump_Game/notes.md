# 55. Jump Game (Greedy Strategy)

## The Core Concept
Instead of simulating jumps (which leads to complex branching or recursion), we track the **farthest reachable index** at any point.

## Logic Flow:
1. `maxReach` tracks the horizon.
2. If the current index `j` exceeds `maxReach`, it means we've hit a "dead zone" (likely caused by a `0` we couldn't jump over).
3. We update `maxReach` using `max(maxReach, j + nums[j])`.
4. If we finish the loop, it means every index was reachable.

## Complexity:
- **Time:** O(n) - Single pass.
- **Space:** O(1) - No extra data structures.

## Security Takeaway:
Using a controlled loop index instead of "jumping" based on input values prevents **Index Tainting** and **Memory Corruption** vulnerabilities.