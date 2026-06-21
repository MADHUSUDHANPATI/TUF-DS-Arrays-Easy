#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
// ok
int Single_number_better2(vector<int> & nums) {

    unordered_map<long long, int > mpp;
    int n = nums.size();

    for( int i=0;i<n;i++) {
        mpp[nums[i]]++;
    }

    for(auto it : mpp) {
        if(it.second==1) {
            return it.first;
            break;
        }
    }
    return -1;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << Single_number_better2(nums);
    
}