#include <bits/stdc++.h>
using namespace std;

bool canMakeABC(string s) {
    if (s == "abc") return true;

    // Try all one-swap possibilities
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            string temp = s;
            swap(temp[i], temp[j]);
            if (temp == "abc") return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        if (canMakeABC(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}