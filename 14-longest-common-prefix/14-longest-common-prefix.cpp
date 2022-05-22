class Solution {
public:
    string lcp(string ans, string str){
        // if(ans.length()>str.length()) swap(swap, str);
        
        int i = 0, j=0;
        while( i<ans.length() && j<str.length()){
            if(ans[i] != str[i])
                break;
            i++;
            j++;
        }
        
        return ans.substr(0,i);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string curr = strs[0];
        
        for(int i = 1; i<strs.size(); i++){
            curr = lcp(curr, strs[i]);
        }
        return curr;
    }
};