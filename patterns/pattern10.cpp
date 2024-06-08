#include<bits/stdc++.h>
using namespace std;
void pattern10a(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10b(int n){
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern10a(n);
    pattern10b(n);
}