int binarySearch(int *input, int n, int val)
{
    int s=0, end=n-1;
    int mid;
    while(s<=end){
        mid= (s+end)/2;
        if(input[mid]<val){
            s= mid+1;
        }
        else{
            end= mid-1;
        }
        if(input[mid]==val){
            return mid;
        }
    }
    return -1;
    //Write your code here
}
