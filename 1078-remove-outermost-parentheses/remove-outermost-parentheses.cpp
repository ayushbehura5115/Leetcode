class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> st;

        for(int i=0;i<s.length();i++){
            char c = s[i];
        
        if(c == '('){
            if(!st.empty()){
                result += c;
            }
            st.push(c);
        }else{
            st.pop();
            if(!st.empty()){
                result += c;
            }
        }
    }
        return result;
    }
    
};