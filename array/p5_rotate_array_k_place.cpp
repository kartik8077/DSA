#include<iostream>
using namespace std;

void rotate(int arr[],int n,int q){
    while (q--)
    {
        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int q;
    cout<<"enter the number:";
    cin>>q;
    rotate(arr,n,q);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}