// hod Using prefix sum pattern

// This method is optimal approch, if array has negative , 0's and positives.

// If array has only 0's and positves , this is better approch, we have one optimal apprich also.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int SubArray_sum_k_better(vector<int> & nums, int k) {
    
    long long sum=0;
    int maxLen=0;
    int n = nums.size();
    unordered_map<long long, int> preSumMap;

    for( int i=0;i<n;i++) {

        sum+=nums[i];

        if(sum==k) {

            maxLen = max( maxLen, i+1);
        }

        long long rem = sum -k;

        if(preSumMap.find(rem)!=preSumMap.end()) {

            int len = i-preSumMap[rem];
            maxLen = max( maxLen, len);
        }

        if(preSumMap.find(sum)==preSumMap.end()) {

            preSumMap[sum] =i;
        }
    }

    return maxLen;
}
int main() {
    
    int n,  k;
    cin >> n>> k;
    vector<int> nums(n);
    for( int i=0;i<n;i++) {
        cin >> nums[i];
    }

    cout << SubArray_sum_k_better( nums, k);
}