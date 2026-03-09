#include <vector>

using namespace std;

class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int totalSurplus = 0, currrentTank = 0, startIndex =0;

            for(int i = 0; i < cost.size(); i++){
                int diff = gas[i] - cost[i];
                totalSurplus += diff;
                currrentTank += diff;

                if(currrentTank < 0){
                    startIndex = i+1;
                    currrentTank = 0;
                }
            }

            if(totalSurplus < 0)
                return -1;

            return startIndex;
            
        }
    };