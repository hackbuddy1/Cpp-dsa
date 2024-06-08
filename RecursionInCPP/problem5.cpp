//print the numbers from 1 to n using back techniques in recursion

#include<bits/stdc++.h>
using namespace std;


void f(int i,int n){
    if(i<1)
    return;
    else{
        f(i-1,n);
        cout<<i<<endl;;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    f(n,n);
}