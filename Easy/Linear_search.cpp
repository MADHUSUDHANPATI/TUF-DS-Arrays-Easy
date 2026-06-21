#include<iostream>
#include<vector>
using namespace std;
int Linear_search(vector<int> & nums,int k ) {

    int n = nums.size();

    for( int i=0;i<n;i++) {

        if( nums[i]==k) return true;
    }

    return false;
}
int main() {

    int n , k;
    cin >> n >> k;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << Linear_search(nums, k);
}