/*

    Problem 8/25 🔴
    “Sensor Status Report”

    A monitoring system records sensor readings throughout the day.

    Positive value → Sensor operating above baseline.
    Negative value → Sensor operating below baseline.
    0 → Sensor inactive.

    The maintenance team wants a report containing:

    Number of positive readings
    Number of negative readings
    Number of inactive readings (0)
    Input Format
    First line:
    N

    Second line:
    N space-separated integers
    Output Format

    Print:

    Positive_Count Negative_Count Zero_Count
    Example
    Input:
    7
    1 -2 0 5 -1 0 3

    Output:
    3 2 2
    Constraints
    1 <= N <= 10^5
    -10^9 <= arr[i] <= 10^9
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

    int pos = 0;
    int neg = 0;
    int zero = 0;

    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pos++;
        }else if(arr[i] < 0){
            neg++;
        }else{
            zero++;
        }
    }

    cout << pos << " " <<  " " << neg << " " << zero << endl;
}

