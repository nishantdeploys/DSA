/*
Problem 6/25 🔴
“Warehouse Package Segregation”

A warehouse stores three types of packages represented by integers:

0 → Fragile
1 → Standard
2 → Heavy

The warehouse manager wants all packages arranged so that:

All 0s first,
then all 1s,
then all 2s.

You must rearrange the array in-place.

Input Format
First line:
N

Second line:
N space-separated integers (only 0, 1, and 2)
Example
Input:
6
2 0 2 1 1 0

Output:
0 0 1 1 2 2
Constraints
1 <= N <= 10^5
arr[i] ∈ {0,1,2}
Expected
Time  -> O(N)
Space -> O(1)

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
    int curr = 0;
    int left = 0;
    int right = n-1;

    while(curr <= right){
        if(arr[curr] == 0){
            swap(arr[left],arr[curr]);
            curr++;
            left++;
        }else if(arr[curr] == 1){
            curr++;
        }else{
            swap(arr[curr],arr[right]);
            right--;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}