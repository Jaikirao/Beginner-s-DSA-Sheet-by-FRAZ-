class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int j=0;
        int n=mat.size()/2;
        for(int i = 0 ; i<mat.size();i++){
            sum += mat[i][j++];
        }
        cout<<j<<endl;
        for(int i = 0 ; i<mat.size();i++){
            sum += mat[i][--j];
        }
        if(mat.size()%2==0){
            return sum;
        }
        else{
            return sum-mat[n][n];
        }
    }
};
