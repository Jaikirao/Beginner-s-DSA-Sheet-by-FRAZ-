#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int i =n-1,j = n-1;
    while(i>=0){
        if(arr[i]==0){
            i--;
        }
        else{
            arr[j]=arr[i];
            j--;
            i--;
        }
    }
    while(j>=0){
        arr[j]=0;
        j--;
    }
    
}
