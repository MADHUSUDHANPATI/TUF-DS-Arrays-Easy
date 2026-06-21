#include<iostream>
#include<vector>
using namespace std;
 void Rotate_Right_by_k_Places_brute ( vector<int> & nums, int k) {

    int n = nums.size();
    k = k%n;
    vector<int> v;

    for( int i= n-k ; i<n ; i++) {
        v.push_back(nums[i]);
    }

    for( int i= n-k-1; i>=0;i--) {

        nums[i+k] = nums[i];
    }

    for( int i=0; i< k ; i++) {
        nums[i]= v[i];
    }
 }
int main() {

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_Right_by_k_Places_brute(nums, k);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}