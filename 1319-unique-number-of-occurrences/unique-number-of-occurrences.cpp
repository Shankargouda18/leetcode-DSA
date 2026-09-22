class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }
        unordered_set<int>s;
        for(auto i: mpp){
            s.insert(i.second);
        }
        if(mpp.size()==s.size()){
            return true;
        }
        return false;
    }
};