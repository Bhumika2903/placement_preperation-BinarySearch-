#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n,int sum){
    if(n==0)
    return sum;
    int rem=n%10;
    sum=sum+rem;
    return sumOfDigits(n/10,sum);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n,0);
    return 0;
}