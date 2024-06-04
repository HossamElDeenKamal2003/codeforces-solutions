#include <iostream>
using namespace std;
int main()
{
 int rows, columns;
 cin >> rows >> columns;
 for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < columns; j++)
        {
            if (i % 4 == 0)
            {
                if (j == 0)cout << "#";
                else cout << ".";
            }
            else if (i % 4 == 2)
            {
                if (j == columns - 1)
                    cout << "#";
                else 
                    cout << ".";
            }
            else
            {
                cout << "#";
            }
        }
  cout << endl;
 }
}