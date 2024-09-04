#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int temp=n;
    int arm=0;
    while(n!=0){
        int rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(arm==temp){
        cout<<"palindrome!!";
    }
    else{
        cout<<"not palindrome!!";
    }
    return 0;
}