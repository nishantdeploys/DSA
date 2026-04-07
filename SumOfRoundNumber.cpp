#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> ans;
    int n;
    cin >> n;
    int pow = 1;
    while(n > 0){
        int digit = n % 10;
        if(digit > 0){
            ans.push_back(pow*digit);
        }
        n/=10;
        pow*=10;
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";

    }cout << endl;
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