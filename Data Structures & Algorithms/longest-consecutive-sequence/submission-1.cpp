class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 1;
        for(int i = 0; i < nums.size(); i++){
            int number = nums[i];
            if(!s.contains(number-1)){
                int instance = 0;
                while(s.contains(number)){
                    number+=1;
                    instance+=1;
                }
                ans = max(ans, instance);
            }
        }
        return ans;
    }
};
