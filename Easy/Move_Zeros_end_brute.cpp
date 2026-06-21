// TC : O( 2n)
// SC : O( n)  

#include<iostream>
#include<vector>
using namespace std;

void Move_Zeros_end_brute( vector<int> & nums) {

    int n = nums.size();

    vector<int> v;

    for( int i=0; i< n;i++) {

        if( nums[i]!=0) {
            v.push_back(nums[i]);         // ---> O(n)
        }
    }

    for( int i=0 ; i<v.size(); i++) {    // ---> O(x)   x is size of vector
        nums[i] = v[i];
    }

    for( int i = v.size(); i<n;i++) {       //--------> O(n-x)
        nums[i]=0;
    }

}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for(  int i=0;i<n;i++) {

        cin >> nums[i];
    }

    Move_Zeros_end_brute(nums);

    for( int i=0;i<n;i++) {
        cout << nums[i]<< " ";
    }
}