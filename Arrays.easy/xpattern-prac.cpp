#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
         for(int b=n-i;b>0;b--){
            cout<<"_";
        }

        for(int b=n-i;b>0;b--){
            cout<<"_";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<n;i++){

        
        
        
        for(int b=n-i;b>0;b--){
            cout<<"*"; //right gap
        }
        
                for(int j=0;j<=i;j++){
                    cout<<"_"; // right star pattern
                }

        for(int j=0;j<=i;j++){
            cout<<"_"; //left star pattern
        }
        
        
        
        for(int b=n-i;b>0;b--){
            cout<<"*"; //left gap
        }
        
        
        cout<<endl;
    }

    // for(int a=0; a<n;a++){
    //     for(int b=n-j;b>0;b--){
    //         cout<<"_ ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}