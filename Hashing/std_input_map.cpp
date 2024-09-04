#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int,int> mp;
    int key;
    int val,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"enter key"<<i<<endl;
    cin>>key;
    cout<<"enter val"<<i<<endl;
    cin>>val;
    mp.insert(pair<int, int>(key, val));
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}