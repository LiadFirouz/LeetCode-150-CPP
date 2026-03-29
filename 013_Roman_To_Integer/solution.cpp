#include <unordered_map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int n = s.size(), result = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && romanValues[s[i]] < romanValues[s[i + 1]])
                result -= romanValues[s[i]];
            else
                result += romanValues[s[i]];
        }

        return result;
    }
};