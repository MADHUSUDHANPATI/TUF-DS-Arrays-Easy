#include<iostream>
#include<vector>
using namespace std;
int Maximum_consecutive_ones(vector<int> & nums) {

    int maxi=0;
    int count=0;
    int n = nums.size();
    for( int i=0;i<n; i++) {

        if( nums[i]==1) {
            count++;
            maxi = max(count, maxi);
        }

        if(nums[i]==0) {
            count=0;
        }
    }
    return maxi;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << Maximum_consecutive_ones(nums);
}