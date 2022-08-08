#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    sort(arr.begin(),arr.end());
    vector<pair<int,int>> sub;
	int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            sub.push_back(make_pair(arr[start],arr[end]));
            end--;
            start++;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    if(sub.empty()){
            sub.push_back(make_pair(-1,-1));
        }
    return sub;
    
    // Write your code here. 
}
