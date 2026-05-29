#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int nums[n];
    
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    int Max = INT_MIN;
    int SMax = INT_MIN;

    for(int i=0;i<n;i++){
        if(Max < nums[i]) Max = nums[i];
    }

    for(int i=0;i<n;i++){
        if(nums[i] < Max && nums[i] > SMax){
            SMax = nums[i];
        }
    }
    if(SMax == INT_MIN){
        cout << -1 << endl;
    }else
        cout << SMax << endl;
}