#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    set<int> s;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        s.insert(k);
    }
    int u = s.size();
    if((n - u) % 2 == 0) cout << u << endl;
    else cout << u - 1 << endl;
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