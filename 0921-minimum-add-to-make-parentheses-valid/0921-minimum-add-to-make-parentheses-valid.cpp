class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<char> st;
        int count=0;
        for(auto it:s){
            if(it=='('){
                st.push('(');
            }
            else {
                if(!st.empty()){
                    st.pop();
                }
                else{
                    count++;
                }
            }
        }
        return count+st.size();
    }
};