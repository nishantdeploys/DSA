#include <iostream>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    if (n <= 2) {
        cout << 0 << endl;
    } else {
        cout << (n - 1) / 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}