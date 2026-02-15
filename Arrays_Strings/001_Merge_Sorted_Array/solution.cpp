#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p_write = m + n - 1;

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p_write--] = nums1[p1--];
            } else {
                nums1[p_write--] = nums2[p2--];
            }
        }

        // Cleanup עבור nums2 בלבד
        while (p2 >= 0) {
            nums1[p_write--] = nums2[p2--];
        }
    }
};