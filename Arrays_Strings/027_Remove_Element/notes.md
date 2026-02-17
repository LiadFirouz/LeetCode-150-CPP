# 27. Remove Element

## Strategy: Two-Pointer (Read/Write)
Used a two-pointer approach where `i` scans the array and `k` tracks the position for the next valid element. This allows us to overwrite "removed" elements in-place without extra memory.

## Complexity
- **Time Complexity:** O(n) - Single pass through the vector.
- **Space Complexity:** O(1) - No auxiliary data structures used.

## Security & C++ Context
- **Residual Data:** Note that elements beyond index `k` still exist in memory. In security-sensitive contexts, these should be explicitly zeroed out to prevent memory forensics/leaks.
- **In-place Safety:** Modifying the vector while iterating requires careful index management to avoid Out-of-bounds access, a common C++ vulnerability.