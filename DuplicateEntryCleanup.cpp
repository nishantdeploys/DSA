/*

“Duplicate Entry Cleanup”

A company maintains a sorted employee ID list. Due to a synchronization issue, some IDs appear multiple times.

The HR system wants to keep only one occurrence of each employee ID while preserving the sorted order.

Your task is to remove duplicates in-place and return the count of unique IDs.

Example
Input:
8
1 1 2 2 2 3 4 4

Output:
4

Updated Array:
1 2 3 4
Constraints
Array is already sorted.
Expected
Time  -> O(N)
Space -> O(1)

This is another classic two-pointer problem.

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    set<int> st;
    for(int x:arr){
        st.insert(x);
    }
    cout << st.size() << endl;

    for(int x:arr){
        cout << x << " ";
    }

}