#include <vector>
using namespace std;

#define N 2

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = N;

        if(nums.size() <= N)
            return nums.size();

        if(nums.size()>0){
            for(int i=N; i<nums.size(); i++){
                if(nums[i] != nums[k-N]){
                    nums[k++] = nums[i];
                }
            }
        }
        return k;
    }
};