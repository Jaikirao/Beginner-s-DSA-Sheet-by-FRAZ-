#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
    
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i]==a[i+1]){
            i++;
        }
        else{
            return a[i];
        }
    }
	// Write your code here.
	
}
