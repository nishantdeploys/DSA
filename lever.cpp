#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            sum += (a[i] - b[i]);
        }
    }
    cout << sum + 1<< endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}