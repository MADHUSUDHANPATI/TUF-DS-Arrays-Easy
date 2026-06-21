#include<iostream>
#include<vector>
using namespace std;

int Single_number_brute(vector<int> & nums) {

    int n =nums.size();
    int ans;
    for( int i=0;i<n;i++) {

        int count=0;
        for( int j=0;j<n;j++) {
            if( nums[i]==nums[j]) {
                count++;
            }
        }

        if(count==1) {
            ans= nums[i];
            break;   
        }
    }
    return ans;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << Single_number_brute(nums);
    
}