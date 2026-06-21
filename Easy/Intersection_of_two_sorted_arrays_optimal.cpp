#include<iostream>
#include<vector>
using namespace std;
void Intersection_of_two_sorted_arrays_optimal( vector<int> & nums1, vector<int> & nums2) {

    vector<int> result;
    int i=0;
    int j=0;
    int n1 = nums1.size();
    int n2= nums2.size();

    while( i < n1 && j < n2) {

        if( nums1[i] < nums2[j]) {
            i++;
        }
        else if ( nums1[i] > nums2[j]) {
            j++;
        }
        else {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    for(auto it : result) {
        cout << it<< " ";
    }
}
int main() {

    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);


    for(  int i=0;i<n1;i++) {

        cin >> nums1[i];
    }
    for(  int i=0;i<n2;i++) {

        cin >> nums2[i];
    }
    Intersection_of_two_sorted_arrays_optimal(nums1, nums2);
}