#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans;

        long long power = 1;

        for (int k = 1; k <= 18; k++) {
            power *= 10; // 10^k

            long long d = power + 1;

            if (d > n) break; // important optimization

            if (n % d == 0) {
                ans.push_back(n / d);
            }
        }

        sort(ans.begin(), ans.end());

        cout << ans.size() << "\n";
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}