#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k*l;
    int enoughDrink = totalDrink/nl;
    int enoughLime = c*d;
    int totalSalt = p/np;
    // cout << totalDrink << enoughDrink << enoughLime << totalSalt;
    int ans = min(enoughDrink,min(enoughLime,totalSalt))/n;
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}