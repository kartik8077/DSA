#include<iostream>
using namespace std;

void rotate(int arr[],int n,int q){
    q=q%n;
    while (q--)
    {
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
    }
    
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7,q;
    cout<<"enter the number :";
    cin>>q;
    rotate(arr,n,q);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  
    }
    return 0;
}