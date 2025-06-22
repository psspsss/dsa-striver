#include <bits/stdc++.h>
using namespace std;



void bubble_sort_rec(int arr[], int n){
    if(n==1)return;

    int didswap =0;

    for(int j=0;j <=n-2;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j]= temp;
            didswap =1;
        }
    }

    if(didswap==0) return;


    bubble_sort_rec(arr, n-1);
}

int main(){
    int arr[] = {204,25,5,77,9,11} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"before Recursive bubble sort: " <<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    cout<<endl;
    bubble_sort_rec(arr,n);

    cout<<"AFTER Recursive bubble sort: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}