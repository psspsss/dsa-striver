#include <bits/stdc++.h>
using namespace std;

vector <int> sortedunion(vector <int> a, vector <int> b){

    int n1= a.size();
    int n2= b.size();

    set <int> st;
    for(int i =0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector <int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}

int main (){

    int n1, n2;
    cout << "Enter size of array 1: ";
    cin >> n1;
    vector <int> arr1(n1);
    cout<<"array 1: "<<endl;
    for(int i=0;i<n1;i++){
        cin>> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> n2;
    vector <int> arr2(n2);
    cout<<"array 2: "<<endl;
    for(int i=0;i<n2;i++){
        cin>> arr2[i];
    }

    vector <int> result = sortedunion(arr1, arr2);

    cout << "Union: ";
    for(int x : result) cout << x << " ";
    cout << endl;

    return 0;
}