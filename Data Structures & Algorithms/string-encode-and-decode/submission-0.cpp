class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s : strs){
            int size = s.size();
            ans += to_string(size);
            ans += '#';
            ans += s;
        }
        cout << ans;
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.size()){
            string num;
            while(s[i]!= '#'){
                num += s[i++];
            }
            i++;
            ans.push_back(s.substr(i, stoi(num)));
            i+=stoi(num);
        }
        return ans;
    }
};
