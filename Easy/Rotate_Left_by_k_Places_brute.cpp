// TC : O(k) + O(n-k) + O(k) = O( n +k)
// SC : O(k)

#include<iostream>
#include<vector>
using namespace std;
void Rotate_Left_by_k_Places_brute( vector<int> &nums, int k) {

    int n = nums.size();
    int k = k%n;
    vector<int> v;

    for( int i=0;i<k ;i++) {
        v.push_back(nums[i]);
    }

    for( int i=k ; i <n ; i++) {
        nums[i-k]= nums[i];
    }

    for( int i = n-k ; i<n;i++) {
        nums[i] = v[i-(n-k)];
    }
}
int main() {

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_Left_by_k_Places_brute(nums, k);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}