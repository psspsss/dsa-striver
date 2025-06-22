#include <bits/stdc++.h>
using namespace std;



void bubble_sort_opt(int arr[], int n){

    for(int i=n-1;i>=0;i--){
        int didswap =0; 
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }

        if(didswap == 0){ // didswap condition so if any swap is happening (sorted array -> didswap==0) so it will break the loop. if not then swap and didswap==1 
            break;
        }
    }

    cout<<"AFTER bubble: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    // TC = W/avg case = O(N square) 
    // BS = O(N) , N = size of array
    // SC = O(1)
}


void bubble_sort(int arr[], int n){

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"AFTER bubble: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
     // TC = W/avg case = O(N square) 
    // SC = O(1)
}

int main(){
    int arr[] = {204,25,5,77,9,11} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"before bubble sort: " <<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    cout<<endl;
    bubble_sort_opt(arr,n);
    return 0;
}