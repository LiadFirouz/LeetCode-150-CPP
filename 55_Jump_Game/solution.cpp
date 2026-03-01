#include <vector>

using namespace std;

class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int maxReach = 0;

            for(int j = 0; j < nums.size(); j++){
                if(j > maxReach)
                    return false;

                maxReach = max(maxReach, nums[j]+j);
            }

            return true;
        }
    };