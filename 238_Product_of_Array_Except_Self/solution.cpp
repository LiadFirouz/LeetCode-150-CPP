#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int i = 0;
            vector <int> ans (nums.size());

            ans[0] = 1;

            for(i = 1; i < nums.size(); i++)
                ans[i] = ans[i-1]* nums[i-1];

            int right = 1;
            for(int i = ans.size()-1; i >= 0; i--){
                ans[i] *= right; 
                right *= nums[i];
            }

            return ans;
        }
    };