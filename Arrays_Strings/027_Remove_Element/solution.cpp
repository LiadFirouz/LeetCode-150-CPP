#include <vector>

using namespace std;

class Solution {
    
    public:
        int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for the position of the next non-val element
        
        for(int i =0 ; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k++] = nums[i]; // Move non-val element to the front
            }
        }
        return k;
    }
};