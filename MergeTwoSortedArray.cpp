#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++] = a[i++];
        }else{
            res[k++] = b[j++];
        }
    }
    if(i == a.size()){
       while(j < b.size()){
            res[k++] = b[j++];
       } 
    }
    if(j == b.size()){
        while(i < a.size()){
            res[k++] = a[i++];
        }
    }
}
int main(){
    vector<int> arr = {1,4,5,8};
    vector<int> brr = {3,6,7,9,10,13};
    int n1 = arr.size();
    int n2 = brr.size();

    vector<int> res(n1+n2);

    merge(arr,brr,res);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }
    cout<<endl;
}