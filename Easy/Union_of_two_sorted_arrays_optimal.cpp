#include<iostream>
#include<vector>
using namespace std;
void Union_of_two_sorted_arrays_optimal( vector<int> & nums1, vector<int> & nums2) {
    
    int n1= nums1.size();
    int n2 = nums2.size();
    vector<int> UnionArr;
    int i=0;
    int j=0;

    while( i < n1 && j < n2) {

        if( nums1[i] <= nums2[j]) {
            if(UnionArr.size()==0 || UnionArr.back() !=nums1[i]) {

                UnionArr.push_back(nums1[i]);
            }
            i++;
        }
        else {
            if(UnionArr.size()==0 || UnionArr.back() !=nums2[j]) {

                UnionArr.push_back(nums2[j]);
            }
            j++;

        }
    }

    while( i < n1) {

        if(UnionArr.size()==0 || UnionArr.back() !=nums1[i]) {

            UnionArr.push_back(nums1[i]);
        }
        i++;

    }

    while( j < n2) {

        if(UnionArr.size()==0 || UnionArr.back() !=nums2[j]) {

            UnionArr.push_back(nums2[j]);
        }
        j++;


    }

    for( auto it : UnionArr) {
        cout << it << " ";
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
    Union_of_two_sorted_arrays_optimal(nums1, nums2);

}