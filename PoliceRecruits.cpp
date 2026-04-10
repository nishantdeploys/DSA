#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr){
    int crime = 0;
    int policeHired = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            policeHired+=arr[i];
        }else{
            if(policeHired == 0){
                crime++;
            }else{
                policeHired--;
            }
        }
    }
    return crime;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = solve(arr);
    cout << ans;
    return 0;
}