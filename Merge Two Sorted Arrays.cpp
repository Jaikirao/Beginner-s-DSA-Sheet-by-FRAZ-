#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    for(int i = 0 ;i<arr2.size();i++){
        arr1.pop_back();
       
    }
    for(int i = 0 ;i<arr2.size();i++){
       
        arr1.push_back(arr2[i]);
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
	// Write your code here.
}
