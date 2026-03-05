#include <vector>
#include <unordered_map>

using namespace std;

std::vector<int>;
std::unordered_map<int, int>;

class RandomizedSet {
    private:
        vector <int> nums;
        unordered_map <int, int> dict;
        int index = 0;

    public:
        RandomizedSet() {
            
        }
        
        bool insert(int val) {
            if(dict.find(val) != dict.end())
                return false;

            dict[val] = nums.size();
            nums.push_back(val);
            return true;
        }
        
        bool remove(int val) {
            if(dict.find(val) == dict.end())
                return false;

            int valInd = dict[val];
            int lastNum = nums.back();

            nums[valInd] = lastNum;
            dict[lastNum] = valInd;

            nums.pop_back();
            dict.erase(val);

            return true;

            
        }
        
        int getRandom() {
            return nums[rand() % nums.size()];
        }
    };
    
    /**
     * Your RandomizedSet object will be instantiated and called as such:
     * RandomizedSet* obj = new RandomizedSet();
     * bool param_1 = obj->insert(val);
     * bool param_2 = obj->remove(val);
     * int param_3 = obj->getRandom();
     */