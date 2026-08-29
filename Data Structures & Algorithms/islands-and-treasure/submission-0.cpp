class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int i, int j){
        return i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == INT_MAX;
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 0){
                    q.push({i, j});
                }
            }
        }

        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        // now we just need to do bfs i believe
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto [x, y] = q.front();
                q.pop();
                for (auto dir : dirs){
                    int new_x = x+dir.first;
                    int new_y = y + dir.second;

                    if(isValid(grid, new_x, new_y)){
                        grid[new_x][new_y] = grid[x][y] + 1;
                        q.push({new_x, new_y});
                    }
                }
            }
        }


    }
};
