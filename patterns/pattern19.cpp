#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
    int iniS=0;
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i; j++){
            cout<<"*";
            cout<<" ";
        }
        //space
        for(int j=0; j<iniS; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<n-i; j++){
            cout<<"*";
            
        }
        iniS+=2;
        cout<<endl;
    }
      iniS=8;
     for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
            cout<<" ";
        }
        //space
        for(int j=0; j<iniS; j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<i; j++){
            cout<<"*";
            
        }
        iniS-=2;
        cout<<endl;

     }
    

}
int main(){
    int n;
    cin>>n;
    pattern19(n);
    return 0;
}