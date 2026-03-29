# 13. Roman to Integer (Easy)

## Strategy: One-Pass Look-Ahead
We iterate through the string once and compare the current character's value with the value of the next character.

### The Subtraction Rule:
- If `Value(current) < Value(next)`: This is a subtraction case (like IV, IX, XC). We **subtract** the current value from the total.
- **Otherwise**: We **add** the current value to the total.

### Implementation Details:
- **Data Structure**: `unordered_map<char, int>` for O(1) constant time lookup of Roman symbols.
- **Boundary Handling**: Use `i + 1 < s.size()` to ensure we don't access memory outside the string's range.

## Complexity
- **Time Complexity:** $O(n)$ - We traverse the string exactly once.
- **Space Complexity:** $O(1)$ - The map size is fixed (only 7 possible Roman characters), regardless of the input string length.

## Key Takeaway
Looking one step ahead is often more efficient than keeping track of the previous element, as it allows for immediate decision-making during the iteration.