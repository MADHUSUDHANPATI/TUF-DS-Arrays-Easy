// TC : O(n)
// SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

void Rotate_right_by_one( vector<int> & nums) {

    int n = nums.size();

    int temp = nums[n-1];
    for( int i=n-1;i>0;i--) {

        nums[i]=nums[i-1];
    }

    nums[0]= temp;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Rotate_right_by_one(nums);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }


}