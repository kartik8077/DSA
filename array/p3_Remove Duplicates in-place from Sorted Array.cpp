#include<iostream>
using namespace std;

void remove(int arr[],int n){

}

int main(){
    int arr[5]={2,3,3,4,5};
    int n=5;
    remove(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}