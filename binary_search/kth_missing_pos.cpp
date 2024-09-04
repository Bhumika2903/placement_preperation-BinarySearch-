#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]-mid-1<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low+k;
} 
int main(){
    int n;
    cin>>n;
    vector<int> missing;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        missing.push_back(num);
    }
    int k;
    cin>>k;
    int ans=findKthPositive(missing,k);
    cout<<ans;
    return 0;
}