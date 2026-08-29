class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string s : strs){
            string toadd = s;
            sort(toadd.begin(), toadd.end());
            m[toadd].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto &[sorted, vectorr]: m){
            ans.push_back(vectorr);
        }
        return ans;
    }
};
