#include<iostream>
#include<vector>
using namespace std;
int missing_Number_optimal2( vector<int> & nums) {
    
    int XOR1=0;
    int XOR2=0;
    int n = nums.size();
    for( int i=0;i<n;i++) {

        XOR1^=nums[i];
        XOR2^=(i+1);
    }

    return XOR1^XOR2;
}
int main()  {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    cout << missing_Number_optimal2(nums);
}
    