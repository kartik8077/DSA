#include<iostream>
using namespace std;

int check(int arr[],int n){
    for(int i=1;i<n;i++){
            if(arr[i]<arr[i+1]){
                return false;
            }
        }
    return true;

}
int main(){
    int arr[6]={1,2,2,5,3,4};
    int n=6;
    cout<<boolalpha<<check(arr,n);
    return 0;
}
