#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i =0; i< n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]= temp;
    }


    cout<<"AFTER Selection: "<< endl;
    for(int i=0; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {204,25,5,77,9,11} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"before Selection sort: " <<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " "; 
    }
    cout<<endl;
    selection_sort(arr,n);
    return 0;
}