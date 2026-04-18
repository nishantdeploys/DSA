#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    int ans = 0;

    while(n>0){
        int d = n%10;
        ans += d;
        n /= 10;
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
    return 0;
}