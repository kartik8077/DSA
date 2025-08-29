#include<bits/stdc++.h>
using namespace std;

int lsearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;}
        }
        return -1;
    }

int main(){
    int arr[6]={2,3,1,5,6,3};
    int n=6;
    int num;
    cout<<"Enter the number you want to search:";
    cin>>num;
    cout<<lsearch(arr,n,num);
    return 0;
}