#include<bits/stdc++.h>
using namespace std;

int main(){
    int row = 3, col = 4;
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int top = 0, bottom = row-1;
    int left = 0, right = col-1;
    
    // Traverse top row
    for(int i = left; i <= right; i++){
        cout << matrix[top][i] << " ";
    }
    top++;
    
    // Traverse right column
    for(int i = top; i <= bottom; i++){
        cout << matrix[i][right] << " ";
    }
    right--;
    
    // Traverse bottom row
    if(top <= bottom){
        for(int i = right; i >= left; i--){
            cout << matrix[bottom][i] << " ";
        }
        bottom--;
    }
    
    // Traverse left column
    if(left <= right){
        for(int i = bottom; i >= top; i--){
            cout << matrix[i][left] << " ";
        }
        left++;
    }
    
    return 0;
}