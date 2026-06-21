// TC : O(nlogn) + O(n) = O(nlogn)
// SC : O(n)

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int Remove_duplicates_sorted_brute ( vector<int> & arr) {
    
    int n = arr.size();
    set<int> st;
    for( int i=0;i<n;i++) {
        st.insert(arr[i]);   // insert takes log(n) to insert;
    }

    int index=0;
    for( auto it: st) {
        arr[index] = it;
        cout << it << " ";
        index++;
    }
    cout<< endl;
    return index;

}
int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for(  int i=0;i<n;i++) {

        cin >> arr[i];
    }

    cout << Remove_duplicates_sorted_brute( arr);
}