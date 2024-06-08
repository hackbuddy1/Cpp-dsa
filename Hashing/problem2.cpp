#include<bits/stdc++.h>
using namespace std;
int main(){
    //first we will take a string as input
    string s;
    cin>>s;
    //pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    //now we take input the number of queries we want to take
    int q;
    cin>>q;
    while(q--){
        //now we take the characters as input 
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}