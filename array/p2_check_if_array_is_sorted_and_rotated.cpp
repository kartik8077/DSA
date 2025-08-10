#include<iostream>
using namespace std;

bool check(int arr[],int n){
    for(int i=1;i<n;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
    return true;

}
int main(){
    int arr[5]={0};
    int n=5;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<boolalpha<<check(arr,n);
    return 0;
}
