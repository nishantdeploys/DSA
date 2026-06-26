#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i,string& s){
    if(i >= s.length()) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return isPalindrome(i+1,s);
}

int main(){
    string s;
    cin >> s;

    if(isPalindrome(0,s)){
        cout << s << " is a palindrome";
    }else{
        cout << s << " is not a palindrome";
    }
    return 0;
}