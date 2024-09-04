#include<bits/stdc++.h>
using namespace std;
//using recursion::
int decTobin(int n){
    if(n==0){
    return 0;
    }
    else{
    return (n%2+10*
    decTobin(n/2));
    }
}
/*
int num,bin=0,rem=0,place=1;
while(num!=0){
    rem=num%2;
    num=num/2;
    bin=bin+(rem*place);
    place=place*10;
}
cout<<bin;
*/
int main(){
    int n;
    cin>>n;
    cout<<decTobin(n);
    return 0;
}