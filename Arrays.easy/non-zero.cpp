#include<bits/stdc++.h>
using namespace std;

vector <int> moveZeros(int n, vector <int> a){

    vector <int> temp;

    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }

        int nonzero= temp.size();

    for(int i=0;i <nonzero;i++){
        a[i]= temp[i];
    }

    for(int i =nonzero; i < n;i++){
        a[i]=0;
    }
    return a;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}
