#include<bits/stdc++.h>
using namespace std;

int main(){
    // input an array
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n]={0};
    cout<<"enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }

    
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
