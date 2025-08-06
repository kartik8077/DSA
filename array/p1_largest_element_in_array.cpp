#include<bits/stdc++.h>
using namespace std;

int largestelement(int arr[],int n){
    int largest=arr[0];
    for(int i=0 ;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[]={1,3,2,45,4};
    int n=5;
    cout<<largestelement(arr,n);
    return 0;
}