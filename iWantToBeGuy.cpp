#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,p,q;
    cin >> l >> p;

    set<int> levels;
    while(p--){
        int m;
        cin>>m;
        levels.insert(m);
    }
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        levels.insert(n);
    }
    if(levels.size()>=l){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!";
    }

return 0;
}