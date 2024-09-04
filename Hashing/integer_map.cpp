#include<iostream>
#include<bits/stdc++.h>
//character Hashing
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    map<int,int> mpp;
    //pre-computing
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // Printing all key value pair in a map
    /*
    for(auto it:mpp){
        cout<<it.first>>"->"<<it.second<<endl;
    }
    */
    int num;
    cout<<"what element you are searching for??"<<endl;
    cin>>num;
    cout<<mpp[num]<<endl;
    return 0;
}