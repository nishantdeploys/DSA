#include<bits/stdc++.h>
using namespace std;

void moveToEnd(vector<int>& boxes){
    int n = boxes.size();
    int left = 0;
    for(int i=0;i<n;i++){
        if(boxes[i] != 0){
            swap(boxes[i],boxes[left]);
            left++;
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> boxes(n);

    for(int i=0;i<n;i++){
        cin >> boxes[i];
    }

    moveToEnd(boxes);

    for(int i=0;i<boxes.size();i++){
        cout << boxes[i] << " ";
    }cout << endl;

    return 0;

}