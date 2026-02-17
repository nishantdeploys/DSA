#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    bool isHard = false;

    for(int i=0;i<n;i++){
        int k;
        cin >> k;

        if(k != 0) isHard = true;
    }
    if(isHard) cout << "Hard" << endl;
    else cout << "Easy" << endl;
}