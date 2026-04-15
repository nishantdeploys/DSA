#include<bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin >> n;
    if(n%3 == 0){
        return "Second";
    }else{
        return "First";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}