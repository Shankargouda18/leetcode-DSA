// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         // A simple tally sheet for numbers 0 to 1000, all starting at 0
//         int tally[1001] = {0};
//         vector<int> ans;

//         // 1. Mark numbers from the first list as 1
//         for (int num : nums1) {
//             tally[num] = 1;
//         }

//         // 2. Check numbers from the second list
//         for (int num : nums2) {
//             // If the tally is 1, it's a new match!
//             if (tally[num] == 1) {
//                 ans.push_back(num);
//                 tally[num] = 2; // Change it to 2 so we ignore future duplicates
//             }
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        vector<int> result;
        for(int i=0; i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto& i:s2){
            auto it = s1.find(i);
            if(it != s1.end())
                result.push_back(i);
        }
    return result;
    }
};