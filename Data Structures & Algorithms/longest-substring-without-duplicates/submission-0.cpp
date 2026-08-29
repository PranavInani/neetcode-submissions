class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, curr = 0, left = 0, right = 0, n = s.size();
        unordered_map<char, int> m;
        while(right < n){
            if(m.find(s[right]) == m.end()){
                m[s[right]]++;
                curr++;
                ans = max(curr, ans);
            }
            else {
                while(left < right){
                    if(s[left] == s[right]) {
                        left++;
                        break;
                    }
                    else {
                        m.erase(s[left]);
                        left++;
                        curr--;
                    }
                }
            }
            right++;
        }
        return ans;
    }
};