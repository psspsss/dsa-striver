#include<bits/stdc++.h>
using namespace std;

vector <int> moveZeros(int n, vector <int> a){

    int j=-1;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
 
    for(int i = j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
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
