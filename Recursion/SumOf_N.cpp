#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0)
        return 0;
    return n+sum(n-1);
}
int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    int Sum=sum(n);
    cout<<Sum;
    return 0;
}