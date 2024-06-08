#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    
    }
    swap(arr[low], arr[j]);
    return j;
}
/*Let's use the array [4, 6, 2, 5, 7, 9, 1, 3] with low = 0 and high = 7 to illustrate the partition function.

Initialization:int pivot = arr[0]; // pivot = 4
int i = 0;
int j = 7;First Iteration:

while (i < j) is true.
Move i:
arr[i] = 4 (i = 0), skip because 4 <= 4.
arr[i] = 6 (i = 1), stop because 6 > 4.
Move j:
arr[j] = 3 (j = 7), stop because 3 <= 4.
Swap arr[i] and arr[j]: Swap 6 and 3Second Iteration:

while (i < j) is true.
Move i:
arr[i] = 2 (i = 2), skip because 2 <= 4.
arr[i] = 5 (i = 3), stop because 5 > 4.
Move j:
arr[j] = 1 (j = 6), skip because 1 <= 4.
arr[j] = 9 (j = 5), stop because 9 > 4.
Swap arr[i] and arr[j]: Swap 5 and 1 while (i < j) is false since i = 4 and j = 3.
Final swap swap(arr[low], arr[j]): Swap 4 and 1
Return:

return j; returns 3, the new pivot index.
The resulting array after partitioning is [1, 3, 2, 4, 7, 9, 5, 6], with the pivot 4 at index 3*/

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
