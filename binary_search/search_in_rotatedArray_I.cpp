#include<bits/stdc++.h>
using namespace std;
/*
Approach 1:
int find_pivot(vector<int>& nums){
        int n=nums.size();
        int pivot=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    pivot=j-1;
                    return pivot;
                }
            }
        }
        return pivot;
    }
    int search_ind(vector<int>& nums, int p, int target){
        int n=nums.size();
        int ind=-1;
        int low1=0;
        int high1=p;
        int low2=p+1;
        int high2=n-1;
        while(low1<=high1){
            int mid=(low1+high1)/2;
            if(nums[mid]==target){
                ind=mid;
                return ind;
            }
            else if(nums[mid]<target){
                low1=mid+1;
            }
            else{
                high1=mid-1;
            }
        }
        while(low2<=high2){
            int mid=(low2+high2)/2;
            if(nums[mid]==target){
                ind=mid;
                return ind;
            }
            else if(nums[mid]<target){
                low2=mid+1;
            }
            else{
                high2=mid-1;
            }
        }
        return ind;
    }
    int search(vector<int>& nums, int target) {
        int pivot_ind=find_pivot(nums);
        return search_ind(nums,pivot_ind,target);
    }
*/
int Search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            //left half is sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            //right half is sorted
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        } 
        return -1;
    }
int main(){
    int n,key,num;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    cin>>key;
    int index = Search(nums,key);
    cout << "The single element is: " << index << "\n";
    return 0;
}