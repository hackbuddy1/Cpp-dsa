#include<bits/stdc++.h>
using namespace std;
void pattern9a(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<< "*";

        }
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}
void pattern9b(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<< "*";

        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern9a(n);
    pattern9b(n);
} 