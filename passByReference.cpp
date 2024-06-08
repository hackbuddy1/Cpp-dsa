#include<bits/stdc++.h>
using namespace std;
void doSomething(string &s){
    cout << s << endl;
    s[2]='m';
    cout << s << endl;
}
int main(){
    string s ="Raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}