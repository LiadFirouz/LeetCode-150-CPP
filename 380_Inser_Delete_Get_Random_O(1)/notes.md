# 380. Insert Delete GetRandom O(1)

## Strategy: Hybrid Data Structure
To achieve $O(1)$ for all operations, we combine a **Vector** for random access and a **Hash Map** for fast lookups.

### The Components:
- `vector<int> nums`: Stores the elements. Required for $O(1)$ random indexing.
- `unordered_map<int, int> dict`: Stores `{Value -> Index in Vector}`. Required to find elements in $O(1)$.

### Key Operations:
1. **Insert**: Push back to vector and record the index in the map.
2. **Remove (The Swap-and-Pop Trick)**: 
   - To delete in $O(1)$ from a vector, swap the element to be deleted with the **last** element.
   - Update the map with the last element's new index.
   - Use `pop_back()` to remove the target element in constant time.
3. **GetRandom**: Generate a random index using `rand() % nums.size()` and return the value.

## Complexity
- **Time Complexity:** $O(1)$ average for all operations.
- **Space Complexity:** $O(n)$ to store elements in both structures.