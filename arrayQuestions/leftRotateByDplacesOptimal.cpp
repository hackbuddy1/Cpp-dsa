#include<bits/stdc++.h>
using namespace std;
//how to reverse
void Reverse(int arr[],int start, int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
//reverse the function
void Rotateeletoleft(int arr[],int d,int n){
    //reverse first d element
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int d=4;
    Rotateeletoleft(arr,n,d);
    cout<<"After Rotating the d element to left ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}