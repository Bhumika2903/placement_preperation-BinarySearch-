#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low; 
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot_ind=partition(arr,low,high);
        quick_sort(arr,low,pivot_ind-1);
        quick_sort(arr,pivot_ind+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}