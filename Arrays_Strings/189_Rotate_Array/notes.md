# 189. Rotate Array

## Strategy: Triple Reverse Algorithm
To rotate an array by `k` steps in O(n) time and O(1) space, we avoid shifting elements one by one. Instead, we use a mathematical trick:
1. Normalize `k` using the modulo operator: `k %= n`.
2. Reverse the entire array.
3. Reverse the first `k` elements.
4. Reverse the remaining `n-k` elements.

## Complexity
- **Time Complexity:** O(n) - Three passes of reversal, which is linear.
- **Space Complexity:** O(1) - In-place rotation using only iterators.

## Technical Insights (C++ & Security)
- **Iterator Arithmetic**: Used `std::reverse` from `<algorithm>` with `vector::begin()` and `vector::end()`.
- **Modulo Guard**: Essential to handle cases where `k > n`. However, one must check if `n > 0` before applying modulo to avoid a division-by-zero crash.
- **Memory Safety**: By using iterators within the valid range of the vector, we ensure memory integrity and prevent out-of-bounds access.