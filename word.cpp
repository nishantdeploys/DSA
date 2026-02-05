#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin >> word;

    int uppercase = 0, lowercase = 0;
    
    for(char c : word){
        if(isupper(c)){
            uppercase++;
        } else {
            lowercase++;
        }
    }
        if(uppercase > lowercase){
        for(int i = 0; i < word.length(); i++){
            word[i] = toupper(word[i]);
        }
    } else {
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
    }
    
    cout << word << endl;
    
    return 0;
}