class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ntoi;
        for(int i = 0; i < nums.size();i++){
            int second = target - nums[i];
            if(ntoi.count(second)){
                return {ntoi[second], i};
            }
            else {
                ntoi[nums[i]] = i; 
            }
        }
        return {-1,-1};
    }
};
