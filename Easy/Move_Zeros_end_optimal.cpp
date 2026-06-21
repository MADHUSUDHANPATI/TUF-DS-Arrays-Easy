// TC : O(n)
//SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

void Move_Zeros_end_optimal( vector<int> & nums) {


    // int j = 0;  // position for next non-zero

    //     for (int i = 0; i < nums.size(); i++) {
    //         if (nums[i] != 0) {
    //             swap(nums[i], nums[j]);
    //             j++;
    //         }
    //     }
    
    int n = nums.size();
    int j =-1;
    for( int i=0;i<n;i++) {                 // -------> O(k)
        if( nums[i]==0) {
            j=i;
            break;
        }
    }

    if( j ==-1) cout << " No Zeros";

    for( int i=j+1; i<n;i++) {

        if(nums[i]!=0) {
            swap(nums[i], nums[j]);           //----> O(n-k)
            j++;
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

    Move_Zeros_end_optimal(nums);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}