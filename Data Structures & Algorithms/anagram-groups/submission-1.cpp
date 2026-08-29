class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string s : strs){
            string duplicate = s;
            sort(duplicate.begin(), duplicate.end());
            m[duplicate].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto&[a,b]:m){
            ans.push_back(b);
        }
        return ans;
        
    }
};
