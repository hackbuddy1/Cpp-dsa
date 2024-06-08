#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void f(){
    
    if(cnt==3) return;
    else{
        cout<<cnt<<"\n";
        cnt++;
        f();
    }
}
int main(){
    f();
}