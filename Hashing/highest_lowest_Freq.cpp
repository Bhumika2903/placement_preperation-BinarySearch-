#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int max_el=0,min_el=0,max_frq=0,min_frq=n;
    int cnt=0;
    for(auto it:mpp){
        cnt=it.second;
        int ele=it.first;
        if(cnt>max_frq){
            max_frq=cnt;
            max_el=ele;
        }
        if(cnt<min_frq){
            min_frq=cnt;
            min_el=ele;
        }
    }
    cout << "The highest frequency element is: " << max_el << "\n";
    cout << "The lowest frequency element is: " << min_el << "\n";
    return 0;
}