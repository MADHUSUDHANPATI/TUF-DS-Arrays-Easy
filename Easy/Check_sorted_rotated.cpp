// Leetcode 1752 Problem
// TC : O(n)
// SC : O(1)

#include<iostream>
#include<vector>
using namespace std;

bool Check_sorted_rotated(vector<int> & arr) {

    int n= arr.size();
    int drops=0;

    for( int i=0;i<n;i++) {

        if( arr[i]> arr[(i+1)%n]) drops++;
    }

    if(drops <=1) return true;
    return false;

}
int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for(  int i=0;i<n;i++) {

        cin >> arr[i];
    }

    cout << Check_sorted_rotated( arr);
}