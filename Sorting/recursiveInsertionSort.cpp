#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int i, int n){
    //Base Case
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertion_sort(arr,i+1,n);
}
int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr);
    cout<<"Before Using Insertion Sort: "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, 0, n);
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}