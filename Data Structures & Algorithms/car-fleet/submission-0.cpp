class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<double> timeLeft(n);
        vector<pair<int, int>> two(n);
        for(int i = 0; i < n; i++){
            two[i] = {position[i], speed[i]};
        }

        sort(two.begin(), two.end(), greater<pair<int, int>>());

        for(int i = 0; i < n; i++){
            timeLeft[i] = (double)(target - two[i].first)/two[i].second;
        }

        for(double time : timeLeft) cout << time << "  "; 
        int cnt = 0;
        double prev = 0.0;
        for(int i = 0; i < n; i++){
            if(timeLeft[i] > prev){
                cnt++;
                prev = timeLeft[i];
            }
        }
        return cnt;

    }
};