// TC : O(n)
// SC : O(1)

#include<iostream>
using namespace std;

bool Check_Sorted( int arr[], int n) {

    // int istrue = true;
    // for( int i=0;i<n-1;i++) {

    //     if(arr[i]> arr[i+1]) {
    //         istrue = false;
    //     }
    // }

    // if(istrue == true) return true;
    // else return false;

    for( int i=1;i<n;i++) {
        
        if( arr[i]  < arr[i-1]) {
            return false;
        }
    }
    return true;
    
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for( int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << Check_Sorted(arr, n);
}