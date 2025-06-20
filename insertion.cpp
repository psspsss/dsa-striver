#include <bits/stdc++.h>
using namespace std;



void insertion_sort(int arr[], int n){

    for(int i = 0; i<=n-1; i++){
            int j = i;
            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
            }
    }

    cout<<"AFTER insertion: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    // TC = W/avg case = O(N square) 
    // BS = O(N) , N = size of array
    // SC = O(1)
}

int main(){
    int arr[] = {204,25,5,77,9,11} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"before insertion sort: " <<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    cout<<endl;
    insertion_sort(arr,n);
    return 0;
}