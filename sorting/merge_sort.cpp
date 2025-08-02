#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int st,int end){
    int mid=st+(end-st)/2;
    if(st>=end){
        return;
    }
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
}



int main(){
    int arr[6]={23,45,2,66,43,6};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}