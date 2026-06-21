// TC : O(k) + O(n-k) + O(n) = O(2n);
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

void Rotate_Left_by_k_Places_optimal( vector<int> & nums, int k) {

    int n = nums.size();
    int k = k%n;
    reverse( nums.begin(), nums.begin()+ k);
    reverse(nums.begin()+k, nums.end());
    reverse( nums.begin(), nums.end());

}

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_Left_by_k_Places_optimal(nums, k);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}