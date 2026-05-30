/*

Signal Rotation System

A telecom company stores incoming signal packets in an array. During a network maintenance operation, the packets must be shifted so that the last K packets are moved to the front of the queue while maintaining their relative order.

Your task is to perform this rotation efficiently.

Input Format
First line:
N K

Second line:
N space-separated integers
Output Format

Print the rotated array.

Example 1
Input:
7 3
1 2 3 4 5 6 7

Output:
5 6 7 1 2 3 4

Explanation:

Last 3 elements:
5 6 7

Move them to front.
Example 2
Input:
5 2
10 20 30 40 50

Output:
40 50 10 20 30
Constraints
1 <= N <= 10^5
0 <= K <= 10^9

*/




#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int>& nums,int k){
    vector<int> ans;
    int n = nums.size();
    k%=n;
    for(int i=n-k;i<n;i++){
        ans.push_back(nums[i]);
    }
    for(int i=0;i<n-k;i++){
        ans.push_back(nums[i]);
    }
    return ans;
}
int main(){
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    vector<int> ans = rotate(nums,k);

    for(int i=0;i<n;i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}