// TC : O(n)
// SC : O(1)

#include<iostream>
using namespace std;

int Largest_Number( int arr[], int n) {

    // int n= arr.size();             // arr is a plain array (int arr[])not vector,  Plain arrays do NOT have .size()
    int largest = arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i] > largest) {
            largest= arr[i];
        }
    }
    return largest;
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for( int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout <<"Largest number is : " <<  Largest_Number( arr, n);
}