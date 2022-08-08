class Solution {
public:
    int maxProfit(vector<int>& prices) {
      //  vector<int> profit;
        int maxbit=0;
        int maxno = 0 ; 
        
       for(int i = 0 ; i <prices.size();i++){
           maxno = max(maxno, prices[i]-prices[maxbit]);
           if(prices[i]<prices[maxbit]){
               maxbit = i ;
           }
           
       }
        return maxno;
        
        }
};
