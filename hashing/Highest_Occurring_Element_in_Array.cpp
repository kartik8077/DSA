// ------------------------------- Highest Occurring Element in an Array-------------------------------

#include<bits/stdc++.h>
using namespace std;

int main(){
    // input an array
    int n;
    cout<<"enter the number of element in the array :";
    cin>>n;
    cout<<"enter the element :";
    int arr[n]={};
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]+=1;
    }

    // find the highest frequency occuring element
    int maxFreq = 0;
    int element = arr[0];  // start by assuming first number is the answer

    for (auto it : map) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "The highest occurring element is: " << element << " (occurs " << maxFreq << " times)" << endl;

    return 0;
}