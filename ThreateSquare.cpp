#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , n , a;
    cin >> m >> n >> a;

    long long row = (m+a-1)/a;
    long long col = (n+a-1)/a;

    long long ans = row * col;
    cout << ans << endl;
}