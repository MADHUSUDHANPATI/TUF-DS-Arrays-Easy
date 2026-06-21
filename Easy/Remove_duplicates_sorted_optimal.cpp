#include<iostream>
#include<vector>
using namespace std;

int Remove_duplicates_sorted_optimal ( vector<int>& arr) {
    
    int n = arr.size();
    int i=0;
    for( int j=1;j<n;j++) {

        if(arr[j]!=arr[i]) {
            arr[i+1]= arr[j];
            i++;                  // Increment first i++, then store at arr[i] also fine;
        }
    }
    return i+1;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for(  int i=0;i<n;i++) {

        cin >> arr[i];
    }

    cout << " Size is : " << Remove_duplicates_sorted_optimal(arr);
    cout << endl;
    for( int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}