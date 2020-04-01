#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num_faces = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            num_faces = num_faces + 4;
        } else if (s == "Cube") {
            num_faces = num_faces + 6;
        } else if (s == "Octahedron") {
            num_faces = num_faces + 8;
        } else if (s == "Dodecahedron") {
            num_faces = num_faces + 12;
        } else if (s == "Icosahedron") {
            num_faces = num_faces + 20;
        } else {
            throw 69;
        }
    }
    cout << num_faces << endl;
    return 0;
}
