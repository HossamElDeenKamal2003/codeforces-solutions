#include <iostream>
#define ll long long
#define unll unsigned long long
#define el endl
using namespace std;
 
int main()
{
    unll num, sec;      //define number of student and seconds
    string str;         //define string
    cin >> num >> sec >> str;   // read number of students, second and string
    while (sec--){       //loop
        for (int i = 1; i < num; ++i){ //nested loop
            if (str[i] == 'G' && str[i-1] == 'B'){  //condition
                str[i] = 'B';
                str[i-1] = 'G';
                i++;
            }
        }
    }
    cout << str << endl;    // prnt string after process
    return 0;
}