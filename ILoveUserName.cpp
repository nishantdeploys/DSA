#include<bits/stdc++.h>
using namespace std;
void sovle(vector<int>& arr){
    int n = arr.size();
    int mx = arr[0];
    int mn = arr[0];
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > mx) {
            count++;
            mx = arr[i];
        }
        else if(arr[i] < mn) {
            count++;
            mn = arr[i];
        }
    }
    cout << count << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sovle(arr);
}















































