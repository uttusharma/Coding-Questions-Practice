class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = 0;
        for(int i=0; i < candies.size(); i++){
            max = max < candies[i] ? candies[i] : max;
        }

        for( int i=0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};