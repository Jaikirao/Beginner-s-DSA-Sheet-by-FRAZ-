class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int  maxno=INT_MIN;
        int sum=0;
        
        for(int i=0 ; i <accounts.size();i++){
            for(int j = 0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
             maxno = max(maxno , sum);
            sum=0;
        }
        return maxno;
    }
};
