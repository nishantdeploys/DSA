#include<bits/stdc++.h>
using namespace std;
int main(){

    // lower bound

    vector<int> v = {10,20,30,40,50};

    auto it = lower_bound(v.begin(),v.end(),30);

    cout << *it << endl;



    // upper bound

    vector<int> vec = {10,20,30,40,50};

    auto itr = upper_bound(vec.begin(),vec.end(),30);

    cout << *itr << endl;
}