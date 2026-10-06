class Solution {
public:
    int minAddToMakeValid(string s) {
        // int left_needed=0;
        // int right_needed=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='('){
        //         left_needed++;
        //     }else{
        //         if(left_needed > 0){
        //             left_needed--;
        //         }else{
        //             right_needed++;
        //         }
        //     }
        // }
        // return left_needed+right_needed;


       stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]==')' && !st.empty() && st.top()=='('){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};