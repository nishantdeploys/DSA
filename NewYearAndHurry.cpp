#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int remainingTime = 240 - k; 
    int timeSpent = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        int timeNeeded = 5 * i;

        if (timeSpent + timeNeeded <= remainingTime) {
            timeSpent += timeNeeded;
            solved++;
        } else {
            break;
        }
    }
    cout << solved << endl;
    return 0;
}