#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &stall,int k,int dist){
    int cntcow=1;
    int last=stall[0];
    for(int i=1;i<stall.size();i++){
        if(stall[i]-last>=dist){
           cntcow++;
           last=stall[i];
        }
        if(cntcow>=k) return true;
    }
    return false;
}
int aggrcow(vector<int> &stall,int n,int k){
    sort(stall.begin(),stall.end());
    int low=1;
    int high=stall[n-1]-stall[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(ispossible(stall,k,mid)==true){
           low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main(){
	int t;
	cin>>t;
    while(t--){
    	int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> stall;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            stall.push_back(num);
        }
        int ans=aggrcow(stall,n,k);
        cout<<ans<<endl;
    }
    return 0;
}