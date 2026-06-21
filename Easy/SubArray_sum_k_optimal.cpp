// hod Using prefix sum pattern

// This method is optimal approch, if array 0's and positives only.

#include<iostream>
#include<vector>
using namespace std;
int SubArray_sum_k_optimal(vector<int> & nums, int k) {
    
    int i=0;
    int j=0;
    int len =0;
    long long sum=0;
    int n = nums.size();

    while( j < n) {

        if( j< n) sum+=nums[j];

        while( sum > k && i<=j ) {

            sum-=nums[i];
            i++;
        }

        if(sum ==k) {
            len = max( len, j-i+1);
        }


        j++;
    }

    return len;

    
}
int main() {
    
    int n,  k;
    cin >> n>> k;
    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << SubArray_sum_k_optimal( nums, k);
}