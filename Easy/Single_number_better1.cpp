#include<iostream>
#include<vector>
using namespace std;

int Single_number_better1(vector<int> & nums) {

    int n = nums.size();
    int ans;

    int maxi=nums[0];
    for( int i=1;i<n;i++) {
        maxi = max(maxi, nums[i]);
    }

    vector<int> hash(maxi+1, 0);          // This only works for postive (+ve ) values. not for negative values.
    for(int i=0;i<n;i++) {
        hash[nums[i]]++;
    }

    for( int i=0;i<n;i++) {

        if( hash[nums[i]]==1) {
            ans = nums[i];
            break;
        }
    }

    return ans;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << Single_number_better1(nums);
    
}