#include<bits/stdc++.h>
using namespace std;
int l(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      start=mid+1;
    } else {
       end=mid - 1;
    }
  }
  return res;
}
int f(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      end = mid - 1;

    } else if (key < v[mid]) {
      start=mid+1;
    } else {
       end=mid - 1;
    }
  }
  return res;
}
int main(){
    int s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    int x;
    cin>>x;
    int n=v.size();
        vector<int> ans;
        int first=f(n,x,v);
        if(first==-1){
           ans.push_back(-1);
           ans.push_back(-1);
        }
        int last=l(n,x,v);
        ans.push_back(first);
        ans.push_back(last);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}