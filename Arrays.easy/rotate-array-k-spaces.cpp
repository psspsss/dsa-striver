#include <bits/stdc++.h>
using namespace std;

void ReverseFunction(int arr[], int start, int end){

  while(start <=end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end]= temp;
    start++;
    end--;
  }
}

void rightrotate(int arr[], int n, int k){
    if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}

void rotateOptimal(int arr[], int n, int k){
  reverse(arr, arr+k);
  reverse(arr+k,arr+n);
  reverse(arr, arr+n);
}

int main(){

    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int k;
    cin>>k;
    // rightrotate(arr,n,k);
    rotateOptimal(arr, n,k);

    cout << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout << endl;

    return 0;
}