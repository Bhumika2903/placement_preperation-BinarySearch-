#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* 1st Method!!
int rev(int arr[],int l,int r){
    if(l>=r)
        return 0;
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
}
*/
// 2nd Method!!
int rev(int arr[],int i,int n){
    if(i>=n/2)
    return 0;
    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1,n);
}
int main() {
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}