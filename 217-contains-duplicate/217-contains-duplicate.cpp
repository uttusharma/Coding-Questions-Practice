class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(auto n: nums) {
            if(mp.find(n) == mp.end())
                mp.insert(n);
            else 
                return true;
        }
        return false;
    }
};