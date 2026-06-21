#include<iostream>
#include<vector>
using namespace std;
int missing_Number_optimal1( vector<int> & nums) {

    int n= nums.size();
    int sum = (n*(n+1))/2;
    int s1=0;
    for( int i=0;i<n ; i++) {

        s1+=nums[i];
    }

    return sum-s1;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << missing_Number_optimal1(nums);
}