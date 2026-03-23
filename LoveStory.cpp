#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string target = "codeforces";

    while(t--) {
        string s;
        cin >> s;

        int count = 0;

        for(int i = 0; i < 10; i++) {
            if(s[i] != target[i])
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}