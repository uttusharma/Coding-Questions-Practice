class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c : s){
            if( ( c == ')' || c == ']' || c == '}' ) && st.empty() ) return false; 
            
            if(c == '(' || c=='{' || c=='[') st.push(c);
            else if(c == ')' && st.top() != '(') return false;
            else if(c == ')' && st.top() == '(') st.pop();
            else if(c == '}' && st.top() != '{') return false;
            else if(c == '}' && st.top() == '{') st.pop();
            else if(c == ']' && st.top() != '[') return false;
            else if(c == ']' && st.top() == '[') st.pop();
        }
        return st.empty();
    }
};