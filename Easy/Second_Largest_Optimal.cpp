// TC : O(n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int Second_Largest_Optimal( int arr[], int n) {

    int secondLargest=-1;
    int largest=arr[0];
    for( int i=1;i<n;i++) {
        if(arr[i]> largest) {
            secondLargest= largest;
            largest=arr[i];
        }

        else if( arr[i]< largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;

}
int main() {
    int n;
    cin>> n;
    int arr[n];
    for( int i=0;i<n;i++) {  // Assume all values are posotive numbers, otherwise second largest = INT_MIN;
        cin >> arr[i];
    }

    cout << "second largest number is " << Second_Largest_Optimal(arr, n);
}