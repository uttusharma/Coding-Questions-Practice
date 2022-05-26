class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        
        int l = 1, h = x/2, ans = 0;
        while(l <= h){
            long long mid = (l+h) / 2;
            long long sqr = mid * mid;
            if(sqr == x) return mid;
            else if (sqr <= x){ 
                l = mid + 1;
                ans = mid;
            }
            else h = mid - 1;
        } 
        return ans;
    }
};