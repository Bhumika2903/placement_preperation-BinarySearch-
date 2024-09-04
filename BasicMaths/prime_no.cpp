#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            cout<<i<<" ";
        }
    }
    cout<<"all divisors are:"<<count<<endl;
    if(count==2){
        cout<<"prime no.!!";
    }
    else{
        cout<<"not a prime no.!!";
    }
    return 0;
}