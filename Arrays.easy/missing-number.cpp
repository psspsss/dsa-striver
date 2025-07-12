#include<bits/stdc++.h>

using namespace std;

int missingNum(int n, int arr[]){
    int missingnum=0;
    int newarr[n];
    for(int i=0;i<n;i++){
        newarr[i]=i;
    }
    while(arr[i]!=newarr[i]){
        
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    missingNum(n,arr);
    for(int i =0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}