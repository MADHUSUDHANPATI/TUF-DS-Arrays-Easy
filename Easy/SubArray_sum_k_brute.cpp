// This problem is for both positives , 0's , Negatives also;

#include<iostream>
#include<vector>
using namespace std;

int SubArray_sum_k_brute(vector<int> &nums, int k) {

    int n= nums.size();
    int len=0;
    for( int i=0;i<n;i++) {
        int sum=0;
        for( int j=i;j<n;j++) {
            sum+=nums[j];
            if(sum==k) {
                len = max(len, j-i+1);
            }
        }
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

    cout << SubArray_sum_k_brute( nums, k);
}
