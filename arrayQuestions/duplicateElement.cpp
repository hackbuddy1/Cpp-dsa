int removeDuplicates(vector<int> &arr, int n) {
	int length=arr.size();
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			length--;
		}
	}
	return length;
}