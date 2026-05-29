#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr,int n){
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }
    int actualSum = n*(n+1)/2;
    return actualSum - sum;
}

int main(){
    int n; //No of Students
    cin >> n;
    
    vector<int> arr;

    for(int i=0;i<n-1;i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }

    int Missing = findMissing(arr,n);

    if(Missing == 0){
        cout << -1 << endl;
    }else{
        cout << Missing << endl;
    }
    return 0;
}