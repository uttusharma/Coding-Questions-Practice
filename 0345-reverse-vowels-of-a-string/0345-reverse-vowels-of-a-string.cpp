#include <stack>

class Solution {
public:

bool isVowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}
    string reverseVowels(string s) {
        stack<char> st;

        string result = "";

        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                st.push(s[i]);
            }
        }

        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                result += st.top();
                st.pop();
            } else {
                result += s[i];
            }
        }

        return result;   
    }
};