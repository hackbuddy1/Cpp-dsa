//sum of first n natural number using parametrised way
#include<bits/stdc++.h>
using namespace std;
int sum=0;
void f(int i){
    if(i<1){
        cout<<sum<<endl;
        return;
    } else{
        sum+=i;
        f(i-1);
        
    }
}
int main(){
    int n;
    
    cin>>n;
    f(n);
}