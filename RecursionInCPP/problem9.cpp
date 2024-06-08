#include<bits/stdc++.h>
using namespace std;
int f(int l,int arr[], int r){
    
    
    if(l>=r) return l;
    swap(arr[l],arr[r]);
    f(l+1,arr[],r-1);
}

int main(){
    int n;
    
    cin>>n;
    int arr[n];
    f(0,arr[],n-1);
    cout<<arr[n];
    return 0;
}