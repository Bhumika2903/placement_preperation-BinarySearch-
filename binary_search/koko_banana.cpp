#include<bits/stdc++.h>
using namespace std;
int TimeTaken(vector<int>& piles, int speed) {
    int totalH = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++) {
        totalH = totalH + ceil((double)(piles[i]) / (double)speed);
    }
    return totalH;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = *max_element(piles.begin(),piles.end());
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = TimeTaken(piles, mid);
        if (totalH <= h) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> banana;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        banana.push_back(num);
    }
    int h;
    cin>>h;
    int ans=minEatingSpeed(banana,h);
    cout<<ans;
    return 0;
}