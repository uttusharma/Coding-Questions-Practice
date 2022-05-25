class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, j = s.length() - 1;
        while(s[j]==' ') j--;
        while(j>=0 && s[j]!=' '){
            res++;
            j--;
        }
        return res;
    }
};