#include <iostream>
 
using namespace std;
 
int main()
{
    int t,ctr=0;
    string str;
    while (cin >> t)
    {
        while (t--)
        {
            cin >> str;
 
            if (str == "Tetrahedron")
                ctr += 4;
            else if (str == "Cube")
                ctr += 6;
            else if (str == "Octahedron")
                ctr += 8;
            else if (str == "Dodecahedron")
                ctr += 12;
            else if (str == "Icosahedron")
                ctr += 20;
        }
 
        cout << ctr << endl;
    }
 
    return 0;
}