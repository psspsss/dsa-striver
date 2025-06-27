#include <bits/stdc++.h>
using namespace std;

void moveNonZero(int arr[], int n){

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            vector <int> temp;
            arr[i]= temp;
            i++;
        }
    }
}

int main(){

    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    moveNonZero(arr,n);
    cout << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout << endl;

    return 0;
}