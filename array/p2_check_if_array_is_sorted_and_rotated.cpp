#include<iostream>
using namespace std;

int check(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;

}
int main(){
    int arr[6]={1,2,2,5,3,4};
    int n=6;
    cout<<check(arr,n);
    return 0;
}
