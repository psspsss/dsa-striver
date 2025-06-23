#include <bits/stdc++.h>
using namespace std;

void rotatearray(vector <int> &arr, int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void printArray(const vector<int>& arr) {
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    vector <int> arr = {6, 7, 8, 9, 10};
    cout << "Original array: ";
    printArray(arr);

    rotatearray(arr, n);

    cout << "Array after rotation: ";
    printArray(arr);

    return 0;
}