#include <bits/stdc++.h>
using namespace std;

void leftrotate(int arr[], int n, int k){
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

int main(){

    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int k;
    cin>>k;
    leftrotate(arr,n,k);

    cout << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout << endl;

    return 0;
}