#include <vector>
#define MIN_CANDY 1

using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> candies(ratings.size(), 1);

        candies[0] = MIN_CANDY;

        for (int i = 1; i < ratings.size(); i++)
        {
            if (ratings[i - 1] < ratings[i])
                candies[i] = candies[i - 1] + 1;
            else
                candies[i] = MIN_CANDY;
        }
    }
};