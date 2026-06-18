/*
    Problem 7/25 🔴
    “Stock Profit Analyzer”

    An investor recorded the stock price of a company for N consecutive days.

    He wants to make exactly one transaction:

    Buy one share on a day.
    Sell it on a later day.

    Your task is to determine the maximum profit he can make.

    If no profit is possible, return 0.

    Input Format
    First line:
    N

    Second line:
    N space-separated stock prices
    Example 1
    Input:
    6
    7 1 5 3 6 4

    Output:
    5

    Explanation:

    Buy at 1
    Sell at 6
    Profit = 5
    Example 2
    Input:
    5
    7 6 4 3 1

    Output:
    0
    Constraints
    1 <= N <= 10^5
    1 <= prices[i] <= 10^9
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

    int minPrice = arr[0];
    int profit = 0;

    for(int i=1;i<n;i++){
        minPrice = min(minPrice,arr[i]);
        profit = max(profit,arr[i]-minPrice);

    }

    cout << profit << " " << endl;
}