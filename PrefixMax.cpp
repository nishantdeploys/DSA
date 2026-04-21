#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int getValue(vector<int> &a) {
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < a.size(); i++) {
        mx = max(mx, a[i]);
        sum += mx;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = getValue(arr); 
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i], arr[j]);

            ans = max(ans, getValue(arr));

            swap(arr[i], arr[j]);
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
        solve();
    }
}