# 169. Majority Element

## Strategy: Boyer-Moore Voting Algorithm
The problem asks for an element that appears more than n/2 times. While a Hash Map approach works in O(n) time and O(n) space, the Boyer-Moore algorithm achieves O(1) space.

### The "Cancellation" Logic:
- Imagine the array as a battlefield of different numbers (armies).
- We maintain a `candidate` and a `count`.
- If the `count` is 0, we designate the current element as the new `candidate`.
- For each subsequent element:
    - If it matches the `candidate`, the `count` increments (the army grows stronger).
    - If it differs, the `count` decrements (two soldiers from different armies cancel each other out).
- Since the majority element occupies more than half the array, it will always be the last one standing, even if every other element tries to cancel it out.

## Complexity
- **Time Complexity:** O(n) — Single linear pass.
- **Space Complexity:** O(1) — No additional data structures used.

## Technical Insights & "Sparring" Lessons
- **`sizeof` vs `size()`**: A critical C++ lesson. `sizeof(vector)` returns the size of the container object itself (metadata), not the number of elements. Always use `.size()` for the element count.
- **State Management**: The `count` variable should never fall below zero. The sequence of operations matters: checking if `count == 0` must happen before or during the update logic to correctly reset the candidate.
- **Memory Safety**: Even when the majority is guaranteed to exist, boundary checks on the index (especially when initializing a candidate) are essential for robust C++ development to avoid out-of-bounds access.