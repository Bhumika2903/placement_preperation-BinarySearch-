#include<bits/stdc++.h>
using namespace std;
int totalDays(vector<int>& weights, int cap){
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                days=days+1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            int totalD=totalDays(weights,mid);
            if(totalD<=days){
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
    vector<int> weight;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        weight.push_back(num);
    }
    int days;
    cin>>days;
    int ans=shipWithinDays(weight,days);
    cout<<ans;
    return 0;
}