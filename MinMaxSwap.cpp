#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Ensure a[i] <= b[i]
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
            }
        }

        int maxA = *max_element(a.begin(), a.end());
        int maxB = *max_element(b.begin(), b.end());

        cout << 1LL * maxA * maxB << "\n";
    }

    return 0;
}