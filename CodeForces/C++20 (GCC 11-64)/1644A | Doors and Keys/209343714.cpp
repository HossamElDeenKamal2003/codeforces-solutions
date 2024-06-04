#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        bool ans = false;
        string s;
        cin >> s;
        //int index_r = 0, index_R = 0, index_g = 0, index_G = 0, index_B = 0, index_b = 0;
       /* for(int i = 0; i < s.size(); i++){
            if(s[i] == 'r')
                index_r = i;
            else if(s[i] == 'R')
                index_R = i;
            else if(s[i] == 'g')
                index_g = i;
            else if(s[i] == 'G')
                index_G = i;
            else if(s[i] == 'b')
                index_b = i;
            else
                index_B = i;
        }*/
        if(s.find('R')<s.find('r')||s.find('B')<s.find('b')||s.find('G')<s.find('g'))
            ans = true;
        if(ans)cout<<"NO\n";
        else
            cout<<"YES\n";
    }
 
}