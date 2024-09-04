#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the size the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){ 
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    //time complexity-O(n^2)
}