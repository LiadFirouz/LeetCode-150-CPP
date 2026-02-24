# 121. Best Time to Buy and Sell Stock

## The Challenge: Time-Sequential Optimization
The goal is to find the maximum difference between two prices in an array, with the strict constraint that the **buy date must precede the sell date**. 

## The Core Logical Trap: "The Time Travel Bug"
A common mistake is to track the absolute `min` and `max` values and return `max - min`.
- **The Issue**: If the global maximum occurs *before* the global minimum, the calculation is invalid because you cannot sell a stock before you buy it.
- **Example**: In `[10, 20, 1]`, the absolute max is 20 and min is 1. But `20-1` is impossible. The real max profit is `20-10=10`.

## The Optimal Strategy: One-Pass "Lock-In"
Instead of tracking prices, we track the **Minimum Price** and the **Best Profit** independently.

### The Algorithm:
1. **Initialize**: Set `min_price` to the first element and `max_profit` to 0.
2. **Iterate**:
    - **Update Minimum**: If the current price is lower than `min_price`, update it. This represents a potential new buying point.
    - **Calculate & Compare**: If the current price minus `min_price` is greater than our current `max_profit`, update `max_profit`.
3. **Outcome**: This "locks in" the best profit seen so far. Even if a much lower price appears later (dropping the `min_price`), it won't affect the `max_profit` unless a subsequent price creates an even larger gap.

## Complexity
- **Time Complexity:** O(n) — Single pass through the vector.
- **Space Complexity:** O(1) — Constant memory usage.

## Technical & Security (C++)
- **Boundary Check**: Always include `if (prices.empty()) return 0;` to avoid out-of-bounds errors on `prices[0]`.
- **State Separation**: Keeping `max_profit` as a separate variable from the current price logic makes the code deterministic and easier to audit for bugs.