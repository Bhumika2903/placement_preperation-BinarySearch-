#include<iostream>
#include<bits/stdc++.h>
//Number
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre computing;
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int num;
    cout<<"enter the number you want to search for"<<endl;
    cin>>num;
    cout<<"occurence of element is:"<<endl;
    //Fetch;
    cout<<hash[num];
    return 0;
}
