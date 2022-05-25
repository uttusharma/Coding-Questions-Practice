class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0])
            return 0;

        int l = 0 , m=0, h = nums.size()-1;
        while(l <= h){
            m = (l+ h)/2;
            if(nums[m] == target) return m;
            else if(nums[m] < target) l = m + 1;
            else h = m - 1;
        }
        return l;
    }
};