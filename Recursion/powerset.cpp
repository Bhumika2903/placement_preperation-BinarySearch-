#include<bits/stdc++.h>
using namespace std;
void subsequences(string s,int n){
   int power_set_size=pow(2,n);
   for(int i=0;i<power_set_size;i++){
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
           cout<<s[j];
        }
    }
    cout<<endl;
  }
}
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    subsequences(s,n);
    return 0;
}