class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>> ans;
        set<vector<int>> s;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int target = -nums[i];
            unordered_map<int, int> m;
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                int second = target - nums[j];
                if(m.count(second)){
                    vector<int> temp = {-target, nums[j], second};
                    sort(temp.begin(), temp.end());
                    s.insert({temp[0], temp[1], temp[2]});
                }
                else{
                    m[nums[j]] = j;
                }
            }
        }
        
        return vector<vector<int>>(s.begin(), s.end());
    }
};
