#include <bits/stdc++.h>
using namespace std;



void insertion_sort_rec(int arr[], int i, int n){
    if(i==n)return;

    int j = i;
    while(j>0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1]= arr[j];
        arr[j]= temp;
        j--;
    }

    insertion_sort_rec(arr,i+1,n);
}
    
int main(){
    int arr[] = {204,25,5,77,9,11} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"before Recursive inserition sort: " <<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    cout<<endl;
    insertion_sort_rec(arr,0,n);

    cout<<"AFTER Recursive insertion sort: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}