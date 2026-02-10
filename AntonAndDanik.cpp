#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //No of Games
    cin>>n;

    string s; //result
    cin>>s;

    int Anton = 0,Danik = 0;
    for(char ch:s){
        if(ch == 'A') Anton++;
        else Danik++;
    }
    if(Anton == Danik){
        cout << "Friendship" << endl;
    }
    if(Anton > Danik){
        cout << "Anton" << endl;
    }else if(Danik > Anton){
        cout << "Danik" << endl;
    }
}