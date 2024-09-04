#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &arr, int n, int m) {
    // Write Your Code Here
        int cnt_max=0;
        int ind=-1;
        for(int i=0;i<n;i++){
            int cnt_ones=m-lower_bound(arr[i],m,1);
            if(cnt_ones>cnt_max){
                cnt_max=cnt_ones;
                ind=i;
            }
        }
        return ind;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
         return 0;
}