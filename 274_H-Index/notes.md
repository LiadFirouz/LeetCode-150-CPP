# 274. H-Index

## Strategy: Sorting vs. Counting
The H-Index measures both the productivity and citation impact of a researcher. We need to find the maximum value $h$ such that $h$ papers have at least $h$ citations.

### Approach 1: Sorting ($O(n \log n)$)
- **Logic**: By sorting citations in descending order, the index $i$ helps us count how many papers meet the citation threshold.
- **The Algorithm**:
    1. Sort the `citations` vector in descending order: `sort(v.begin(), v.end(), greater<int>())`.
    2. Iterate through the array using index `i`.
    3. If `citations[i] > i`, increment the H-Index (or simply return the count at the end).
    4. **Safety Check**: Ensure the loop runs through the entire array (`i < citations.size()`) to avoid **Off-by-one** errors.

### Approach 2: Bucket Sort ($O(n)$) - The Optimized Way
- **Logic**: Since the H-Index cannot exceed the total number of papers $n$, citations greater than $n$ are treated as $n$.
- **The Algorithm**:
    1. Create a `buckets` vector of size $n+1$, initialized to 0.
    2. Count citations: if `c >= n`, increment `buckets[n]`, else increment `buckets[c]`.
    3. Iterate backwards from `n` down to 0, maintaining a `running_sum` of papers.
    4. The first time `running_sum >= i`, then `i` is the H-Index.

## Complexity
- **Time Complexity**: $O(n \log n)$ with sorting OR $O(n)$ with Bucket Sort.
- **Space Complexity**: $O(1)$ (in-place sort) OR $O(n)$ (for buckets).