#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int count = 0;
    while(n--){
        int k , capacity;
        cin >> k >> capacity;

        if(k == capacity){
            continue;
        }else if((capacity-k) == 1){
            continue;
        }
        count++;
    }
    cout << count << endl;
}