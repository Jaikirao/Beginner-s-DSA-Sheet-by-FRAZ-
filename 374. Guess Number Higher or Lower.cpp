/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1,end=n;
        int mid = s+(end-s)/2;
        while(s<=end){
           
            if(guess(mid)==-1){
                
                end = mid-1;
            }
            else if(guess(mid)==1){
                
                s=mid+1;
            }
            else if(guess(mid)==0){
                return mid;
            }
             mid= s+(end-s)/2;
        }
        return mid;
    }
};
