#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& arr,int n,int x){
    long long low = 0;
    long long high = 2e9;
    long long ans = 0;

    while(low <= high){
        int mid = low+(high-low)/2;
        long long water = 0;
        bool ok = true;

        for(int height:arr){
            if(height < mid){
                water += mid-height;
                if(water > x){
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        solve(arr,n,x);
    }

    return 0;
}