class Solution {
public:
    string removeStars(string s) {
        // string c="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='*'){
        //         c.pop_back();
        //     }else{
        //         c+=s[i];
        //     }
            
        // }
        // return c;



        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!='*') st.push(s[i]);
            else{
                st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};