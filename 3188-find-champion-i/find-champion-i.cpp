class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0, winner;

        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1)
                    temp++;
            }
            if(temp >= ans){
                ans = temp;
                winner = i;
            }
        }

        return winner;
    }
};