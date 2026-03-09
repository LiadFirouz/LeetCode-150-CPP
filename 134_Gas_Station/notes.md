# 134. Gas Station

## Strategy: Greedy Accumulation
The key is to track the "net gain/loss" at each station and use failures to skip invalid starting points.

### Key Logic:
- `diff = gas[i] - cost[i]`: This represents the fuel balance for one leg of the trip.
- **Total Surplus**: If `sum(gas) < sum(cost)`, it's mathematically impossible to finish. Return -1.
- **Current Tank**: If `current_tank` drops below 0, it means the current `start_index` (and every station between it and `i`) cannot be the starting point.
- **The Jump**: Reset `current_tank = 0` and set `start_index = i + 1`.

## Complexity
- **Time Complexity:** $O(n)$ - Single pass through the arrays.
- **Space Complexity:** $O(1)$ - Only a few integer variables.