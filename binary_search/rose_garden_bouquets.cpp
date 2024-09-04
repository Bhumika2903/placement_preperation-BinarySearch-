#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& bloomDay,int m,int k,int mid){
    int count=0;
    int noB=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            count++;
        }
        else{
            noB+=(count/k);
            count=0;
        }
    }
    noB+=(count/k);
    return noB>=m;
}
int minDays(vector<int>& bloomDay, int m, int k) {
    if((long)m*k>bloomDay.size()){
        return -1;
    }
    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    while(low<=high){
        int mid=(low+high)/2;
        if(isPossible(bloomDay,m,k,mid)){
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
    vector<int> bloomDay;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        bloomDay.push_back(num);
    }
    int m,k;
    cin>>m>>k;
    int ans=minDays(bloomDay,m,k);
    cout<<ans;
    return 0;
}
