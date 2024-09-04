    #include<bits/stdc++.h>
    using namespace std;
    int find(vector<vector<int>>& mat,int n,int m,int col){
        int max_val=-1;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>max_val){
                max_val=mat[i][col];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int max_row_ind=find(mat,n,m,mid);
            int left=mid-1>=0?mat[max_row_ind][mid-1]:-1;
            int right=mid+1<m?mat[max_row_ind][mid+1]:-1;
            if(mat[max_row_ind][mid]>left&&mat[max_row_ind][mid]>right){
                return {max_row_ind,mid};
            }
            if(mat[max_row_ind][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
    int main(){
        vector<vector<int>> matrix = {{6, 1, 3}, {4, 5, 1}, {3, 8, 5}};
        cout;<< findPeakGrid(matrix);
        return 0;
    }