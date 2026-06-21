#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Rotate_Right_by_k_Places_optimal( vector<int> & nums, int k) {

    int n = nums.size();
    k = k%n;

    // reverse( nums.begin(), nums.end());
    // reverse( nums.begin(), nums.begin()+k);
    // reverse(nums.begin()+k, nums.end());

    reverse( nums.begin()+(n-k), nums.end());
    reverse(nums.begin(), nums.begin()+(n-k));
    reverse( nums.begin(), nums.end());


}
int main() {

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_Right_by_k_Places_optimal(nums, k);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}