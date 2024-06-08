//brute forse approach
vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int t=0;
    t=temp.size();
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=t;i<n;i++){
        a[i]=0;
    }
    return a;
}
