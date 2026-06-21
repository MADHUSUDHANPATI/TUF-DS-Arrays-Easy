#include<iostream>
#include<vector>
#include<set>
using namespace std;
void Union_of_two_sorted_arrays_brute( vector<int> & nums1, vector<int> & nums2) {

    int n1=nums1.size();
    int n2= nums2.size();
    set<int> st;
    for( int i=0;i<n1;i++) {
        st.insert(nums1[i]);
    }

    for( int i=0;i<n2;i++) {
        st.insert(nums2[i]);
    }

    for( auto it:st) {
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

    Union_of_two_sorted_arrays_brute(nums1, nums2);

    

    
}
