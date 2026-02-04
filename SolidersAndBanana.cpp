#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,w,n;
    cin >> k >> w >> n;

    long long totalCost = k*n*(n+1)/2;

    cout << max(0LL, totalCost - w);

    return 0;
}