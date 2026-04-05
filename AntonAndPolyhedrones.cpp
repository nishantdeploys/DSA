#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long total_faces = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if (s == "Tetrahedron") {
            total_faces += 4;
        } else if (s == "Cube") {
            total_faces += 6;
        } else if (s == "Octahedron") {
            total_faces += 8;
        } else if (s == "Dodecahedron") {
            total_faces += 12;
        } else if (s == "Icosahedron") {
            total_faces += 20;
        }
    }
    cout << total_faces << endl;
    return 0;
}