bool isPerfectSquare(long long n) {
    if(n==1){
        return true;
    }
    long long s=0, end=n/2;
    long long mid;
    while(s<=end){
        mid= (s+end)/2;
        if(mid*mid<n){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        if(mid*mid==n){
            return true;
        }
    }
    return false;
	// Write your code here.
}
