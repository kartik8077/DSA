#include<bits/stdc++.h>
using namespace std;

// brute force approach--------------------------------------
// void move(int arr[],int n){
//     vector<int>temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     int nz=temp.size();
//     for(int i=nz;i<n;i++){
//         arr[i]=0;
//     }
// }


// optimal solutions-------------------------
void move(int arr[],int n){
    int j=-1;

}
int  main(){
    int arr[8]={1,0,3,0,4,0,2,0};
    int n=8;
    move(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}