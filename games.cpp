#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> home(n),guest(n);
    for(int i=0;i<n;i++){
        cin >> home[i] >> guest[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i] == guest[j]) count++;
        }
    }
    cout << count << endl;
}