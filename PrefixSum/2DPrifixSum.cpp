#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;

    vector<vector<int>> pref(n+1,vector<int>(n+1,0)); 

    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        for(int j=1;j<=n;j++){
            int tree = (s[j-1] == '*');
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + tree;
        }
    }

    vector<int> answer;

    while(q--){
        int y1,x1,y2,x2;
        cin >> y1 >> x1 >> y2 >> x2;

        int ans = pref[y2][x2] - pref[y1-1][x2] - pref[y2][x1-1] + pref[y1-1][x1-1];

        answer.push_back(ans);
    }

    for(int x:answer){
        cout << x << " ";
    }
    cout << endl;

    return 0;


}