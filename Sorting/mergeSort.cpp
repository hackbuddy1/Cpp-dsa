#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low, int mid, int high){
    vector<int> temp;
    int left= low;
    int right= mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    /*Suppose we have the following array and indices:

arr = [1, 3, 5, 2, 4, 6]
low = 0
mid = 2
high = 5
The subarrays are:

First subarray: [1, 3, 5] (from index 0 to 2)
Second subarray: [2, 4, 6] (from index 3 to 5)
Initial State
left = 0
right = 3
temp = []
Iteration Steps
First Comparison

arr[left] = arr[0] = 1
arr[right] = arr[3] = 2
1 <= 2: temp.push_back(arr[left]) results in temp = [1]
left++: left = 1
Second Comparison

arr[left] = arr[1] = 3
arr[right] = arr[3] = 2
3 > 2: temp.push_back(arr[right]) results in temp = [1, 2]
right++: right = 4
Third Comparison

arr[left] = arr[1] = 3
arr[right] = arr[4] = 4
3 <= 4: temp.push_back(arr[left]) results in temp = [1, 2, 3]
left++: left = 2
Fourth Comparison

arr[left] = arr[2] = 5
arr[right] = arr[4] = 4
5 > 4: temp.push_back(arr[right]) results in temp = [1, 2, 3, 4]
right++: right = 5
Fifth Comparison

arr[left] = arr[2] = 5
arr[right] = arr[5] = 6
5 <= 6: temp.push_back(arr[left]) results in temp = [1, 2, 3, 4, 5]
left++: left = 3
At this point, left exceeds mid (left = 3, mid = 2), so the loop terminates.*/
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &arr,int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr={9,4,7,6,3,1,5};
    int n=7;
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}