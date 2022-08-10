#include <bits/stdc++.h>
int findPeak(vector<int> &arr) {
    int s=0, end=s+2;
    while(end!=arr.size()-1){
        if(arr[s]<arr[s+1] and arr[end]<arr[s+1]){
            return arr[s+1];
        }
        else{
            s++;
            end++;
        }
    }
    return *max_element(arr.begin(),arr.end());
    // Write your code here
}
