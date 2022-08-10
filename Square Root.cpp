
int sqrtN(long long int N)
{
    if(N==1){
        return 1;
    }
    unsigned int  s=0, end= N;
    long long int mid =s+(end-s)/2;;
    long long int  ans=-1;
    while(s<=end){
        
        if(mid*mid<N){
            ans = mid;
            s=mid+1;
        }
        else if(mid*mid>N) {
            end= mid-1;
        }
        if(mid*mid==N){
            return mid;
        }
        mid=s+(end-s)/2;
    }
    return ans;
    // Write your code here.
}
