#include<iostream>
#include<bits/stdc++.h>
//character Hashing
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int> mpp;
    //pre-computing
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    // Printing all key value pair in a map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    char ch;
    cout<<"enter character you want to search for:"<<endl;
    cin>>ch;
    cout<<"occurence of given character is:"<<mpp[ch];
    return 0;
}