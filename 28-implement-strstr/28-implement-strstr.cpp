class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i<haystack.length(); i++){
            if(needle[0] == haystack[i] && needle.length() <= haystack.length()){
                bool flag = true;
                for(int j=0; j<needle.length(); j++){
                    if(needle[j]!=haystack[i+j]){
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    return i;
            }
        }
        return -1;
    }
};