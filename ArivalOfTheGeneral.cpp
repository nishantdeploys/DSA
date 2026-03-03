#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxIdx = 0;
    int minIdx = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[minIdx]){
            minIdx = i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] > arr[maxIdx]){
            maxIdx = i;
        }
    }

    int moves = maxIdx + (n - 1 - minIdx);

    if(maxIdx > minIdx){
        moves--;
    }
    cout << moves << endl;
    
}