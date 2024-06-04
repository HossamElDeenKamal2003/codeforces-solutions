#include <iostream>
using namespace std;
 
int main()
{
    string str;
    char ch;
    bool flag = true;
    cin >> str;
 
    for(int i = 1; i < str.length(); i++)
    {
        if(islower(str[i]))
        {
            flag = false;
        }
    }
 
    if(flag == true)
    {
        for(int j = 0; j < str.length(); j++)
        {
            if(islower(str[j]))
                ch = toupper(str[j]);
            else
                ch = tolower(str[j]);
            cout << ch;
        }
    }
    else
        cout << str;
    return 0;
}