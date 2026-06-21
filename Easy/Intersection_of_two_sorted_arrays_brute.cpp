#include<iostream>
#include<vector>
using namespace std;

void Intersection_of_two_sorted_arrays_brute( vector<int> &nums1, vector<int> & nums2) {

    int n1 = nums1.size();
    int n2= nums2.size();
    vector<int> resultArr;
    vector<int> visitedArr(n2, 0);

    for( int i=0;i<n1;i++) {

        for( int j=0; j<n2 ; j++) {

            if(nums1[i] == nums2[j] && visitedArr[j]==0) {

                resultArr.push_back(nums1[i]);
                visitedArr[j]=1;
            }
        }
    }

    for( auto it : resultArr) {
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
    Intersection_of_two_sorted_arrays_brute(nums1, nums2);
}