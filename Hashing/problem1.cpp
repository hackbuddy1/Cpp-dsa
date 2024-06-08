//hashing of numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    /* let arr[n]={1,3,1,7,3,3,1,8,12,7};
    hash[13]={0} means the array size of hash is 13 and we give each element initial value as 0
    and for iteration i=0: arr[0]=1, hash[1]+=1->hash[1]=1
    state of hash:[0,1,0,0,0,0,0,0,0,0,0,0,0]
    i=1:arr[1]=3,hash[3]+=1-> hash[3]=1
    state of hash:[0,1,0,1,0,0,0,0,0,0,0,0]*/
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
           }
           return 0;
}
