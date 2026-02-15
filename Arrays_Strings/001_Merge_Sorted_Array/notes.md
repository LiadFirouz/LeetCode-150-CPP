# 88. Merge Sorted Array

## Strategy: Backward Three-Pointer
Instead of merging from the beginning of the array (which would require an auxiliary array or expensive element shifts), I chose to merge from the back to the front. 
Since the end of `nums1` is empty (filled with zeros), we can place the largest elements there without overwriting any existing data.

## Complexity
- **Time Complexity:** O(m + n) - We traverse each element in both arrays at most once.
- **Space Complexity:** O(1) - The merge is performed In-place within the original array, requiring no additional heap memory allocation.

## Low-Level & Security Insights (C++)
- **Memory Efficiency:** Using an In-place approach avoids dynamic allocations. In security-critical and high-performance systems, this prevents Memory Fragmentation and reduces the risk of Memory Leaks.
- **Index Safety:** During development, I prioritized the use of Post-decrement (e.g., `p1--`) to ensure the current value is accessed before the index is decremented, preventing Out-of-bounds memory access.
- **STL Usage:** Utilizing `std::vector` allows for modern and clean dynamic array management in C++, providing better abstraction than raw C-style arrays.