#include<iostream>
#include<vector>
using namespace std;
int missing_Number_brute ( vector<int> & nums) {

    int n= nums.size();
    for( int i=0; i<=n ; i++) {

        int flag=0;
        for( int j=0;j< n;j++) {
            if( nums[j] == i) {

                flag=1;
            }
        }

        if( flag==0) {
            return i;
            break;
        }
        
    }
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << missing_Number_brute(nums);
}