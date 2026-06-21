#include<iostream>
#include<vector>
using namespace std;
int Single_number_better2(vector<int> & nums) {

    int XOR=0;
    int n = nums.size();
    for( int i=0;i<n;i++) {

        XOR^=nums[i];
    }

    return XOR;
}
int main() {

    int n;
    cin>> n;
    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << Single_number_better2(nums);
}