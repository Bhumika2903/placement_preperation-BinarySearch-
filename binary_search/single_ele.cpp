#include <bits/stdc++.h>
using namespace std;
/*
int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); //size of the array.
    int ans = 0;
    // XOR all the elements:
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}
*/
/*
int findFirstOcc(vector<int>& nums,int key,int n){
        int f=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==key){
                f=mid;
                high=mid-1;
            }
            else if(nums[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return f;
    }
    int findLastOcc(vector<int>& nums,int key,int n){
        int l=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==key){
                l=mid;
                low=mid+1;
            }
            else if(nums[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return l;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ele=nums[i];
            int first_occ=findFirstOcc(nums,ele,n);
            int last_occ=findLastOcc(nums,ele,n);
            if(first_occ==last_occ){
                return ele;
            }
        }
        return -1;
    }

*/
int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        if (n == 1) {
            return nums[0];
        }
        if (nums[0] != nums[1]) {
            return nums[0];
        }
        if (nums[n - 1] != nums[n - 2]) {
            return nums[n - 1];
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] != (nums[mid - 1]) && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            } else if ((mid % 2 != 0 && nums[mid] == nums[mid - 1]) ||
                       (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}
