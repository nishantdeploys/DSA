#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    string prev, current;
    int groups = 0;

    for (int i = 0; i < n; i++) {
        cin >> current;

        if (i == 0) {
            groups = 1;   
        } else {
            if (current != prev) {
                groups++;  
            }
        }

        prev = current;
    }

    cout << groups << endl;
}