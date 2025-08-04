#include<bits/stdc++.h>
using namespace std;

int partion(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while (arr[i]<=arr[pivot]&& i<=high)
        {
            i++;
        }
        while (arr[j]>arr[pivot]&&j>=low)
        {
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    
}

// quick sort
void quicksort(int arr[],int low, int high){
    if (low<high){
        int pindex=partion(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
        
    }
   
}


int main(){
    int arr[6]={34,56,44,6,1,23};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}