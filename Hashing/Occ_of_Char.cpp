#include<iostream>
#include<bits/stdc++.h>
//character Hashing
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    //pre computing;
    int hash[26]={0};
    for(int i=0;i<n;i++){
        hash[s[i]-'a']+=1;
    }
    char ch;
    cout<<"enter the character you want to search for"<<endl;
    cin>>ch;
    cout<<"occurence of element is:"<<endl;
    //Fetch;
    cout<<hash[ch-'a'];
    return 0;
}
