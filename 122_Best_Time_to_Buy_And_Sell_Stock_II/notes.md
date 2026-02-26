## Why the Simple Greedy Approach Works
In Stock II, we are allowed multiple transactions. This means we can capture every positive price movement.
Instead of looking for global minima and maxima, we simply sum all instances where `prices[i] > prices[i-1]`.
This effectively "climbs" every hill in the stock price graph, resulting in the maximum possible profit.