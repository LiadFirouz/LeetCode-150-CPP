#include <vector>

using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int k = 1; // Pointer for the position of the next non-val element
            
            if(nums.size()>0){ 
                int last_num = nums[0];
                for(int i =0 ; i < nums.size(); i++) {
                    if(nums[i] != last_num){
                        nums[k++] = nums[i];
                    }
    
                    last_num = nums[i];
                }
            }
            return k;
        }
    };