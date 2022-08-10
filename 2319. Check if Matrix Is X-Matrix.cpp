class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int k = 0 ;
        int n = grid.size();
        for(int i = 0 ; i<grid.size();i++){
            if(grid[i][k]==0){
                return false;
            }
            grid[i][k]=0;
            k++;
        }
        if(n%2!=0){
            grid[n/2][n/2]=1;
        }
        for(int i = 0 ; i<grid.size();i++){
            if(grid[i][--k]==0){
                return false;
            }
            
            grid[i][k]=0;
            
            
        }
       for(int i=0;i<grid.size();i++){
            for(int j =0 ;j<grid[i].size();j++){
                if(grid[i][j]!=0){
                    return false;
                }
            }
        }
        return true;
    }
};
