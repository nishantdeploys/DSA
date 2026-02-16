#include<bits/stdc++.h>
using namespace std;
int main(){
    int stops;
    cin>>stops;

    int currPasenger = 0;
    int Max = 0;
    while(stops--){
        int a,b;
        cin >> a >> b;
        
        currPasenger -= a;
        currPasenger += b;

        Max = max(currPasenger,Max);

    }
    cout<<Max<<endl;
}