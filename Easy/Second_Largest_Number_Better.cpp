// TC: O(2n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int Second_Largest_Number( int arr[], int n) {

    int largest = arr[0];
    int secondLargest=-1;
    for( int i=1;i<n;i++) {
        if( arr[i] > largest)  {
            largest=arr[i];
        }
    }
    // cout << largest << ;

    for(int i=0;i<n;i++) {
        if( arr[i]> secondLargest && arr[i]!=largest) {
            secondLargest= arr[i];
        }
    }

    return secondLargest;
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for( int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout <<"Second largest number is :" <<  Second_Largest_Number(arr, n);

}