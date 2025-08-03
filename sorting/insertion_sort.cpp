#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
   }
}

int main(){
    int arr[8]={6,8,1,4,5,3,7,2};
    int n=8;
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}