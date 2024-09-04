#include<bits/stdc++.h>
using namespace std;
int mean(int i,int s,int n,int arr[]){
	if(i>=n)
	return s;
	s=s+arr[i];
	return mean(i+1,s,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int sum=mean(0,0,n,arr);
    cout<<sum/n;
    return 0;
}