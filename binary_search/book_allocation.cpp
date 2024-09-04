#include<bits/stdc++.h>
using namespace std;
int isPossible(vector<int>& arr, int m, int page){
    int totalStudents=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]>page){
            totalStudents+=1;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return totalStudents;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int low=*min_element(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int high=sum;
    if(n<m){
        return -1;
    }
    if(n==m){
        return *max_element(arr.begin(),arr.end());
    }
    while(low<=high){
        int mid=(low+high)/2;
        int totalS=isPossible(arr,m,mid);
        if(totalS<=m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> stu;
    for(int i=0;i<n;i++){
       int num;
       cin>>num;
       stu.push_back(num);
    }
    int m;
    cin>>m;
    int ans=findPages(stu,n,m);
    cout<<ans;
    return 0;
}