#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int n = citations.size();
        vector<int> buckets(n + 1, 0);

        for (int c : citations) {
            if (c >= n) 
                buckets[n]++;
            else 
                buckets[c]++;
        }
        
        int count = 0;
        for (int i = n; i >= 0; i--) {
            count += buckets[i];
            if (count >= i) 
                return i;
        }
        return 0;
    }
};

/*class Solution {
    public:
        int hIndex(vector<int>& citations) {
            sort(citations.begin(), citations.end(), greater<int>());

            int hIndex = 0;
            for(int i = 0; i < citations.size(); i++){
                if(citations[i] > i)
                    hIndex++;
                else
                    return hIndex;

            }
            return hIndex;

        }
    };*/