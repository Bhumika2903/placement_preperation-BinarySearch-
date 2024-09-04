#include<bits/stdc++.h>
using namespace std;
int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    if(n>m) {
        return kthElement(arr2, arr1, m, n, k);
    }
    int left=k;
    int low=max(0,k-m);
    int high=min(k,n);
    while(low<=high){

        int mid1=(low+high)/2;
        int mid2=k-mid1;

        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;
        if(mid1<n) r1=arr1[mid1];
        if(mid2<m) r2=arr2[mid2];
        if(mid1-1>=0) l1=arr1[mid1-1];
        if(mid2-1>=0) l2=arr2[mid2-1];
        
        if(l1<=r2&&l2<=r1){
            return max(l1,l2);
        }
        else if(l1>l2){
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }
    return 1;
}
int main(){
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    cout <<"The k-th element of two sorted array is: "<< kthElement(a, b, a.size(), b.size(), 5)<<endl;
    return 0;
}