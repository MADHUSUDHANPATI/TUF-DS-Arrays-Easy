// TC : O(n)
// SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

void Rotate_Left_by_one( vector<int> & nums) {

    int n = nums.size();

    int temp = nums[0];
    // for( int i=1;i<n;i++) {
    //     nums[i-1]=nums[i];          // Both are same 
    // }

    for( int i=0;i<n-1;i++) {
        nums[i] = nums[i+1];
    }
    nums[n-1]= temp;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_Left_by_one(nums);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }


}