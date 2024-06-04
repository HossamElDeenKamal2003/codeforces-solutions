#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    string s1, s2;
    int ctr1 = 0, ctr2 = 0;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int l1 = s1.size(), l2 = s2.size();
    if(s1 == "M" && s2 == "S")
        cout << ">" << endl;
    if(s1 == "S" && s2 == "M")
        cout << "<"<< endl;
    if(s1 == "L" && s2 == "M")
        cout << ">"<< endl;
    if(s1 == "M" && s2 == "L")
        cout << "<"<<endl;
    if(s1 == "L" && s2 == "S")
        cout << ">"<< endl;
     if(s1 == "S" && s2 == "L")
        cout << "<"<< endl;
    if(s1 == s2)
        cout << "=" << endl;
    if((s1[0] == 'L' && s2[0] == 'L' && l1 > l2) || (s1[0] == 'L' && s2[0] == 'S') || (s1[0] = 'M' && s1[0] == 'S') || (s1[0] = 'L' && s1[0] == 'M'))
        cout << ">" << endl;
    if((s1[0] == 'L' && s2[0] == 'L' && l1 < l2) || (s1[0] == 'S' && s2[0] == 'L' ) || (s1[0] = 'S' && s1[0] == 'M') || (s1[0] = 'M' && s1[0] == 'L'))
        cout << "<" << endl;
    if(s1[0] == 'S' && s2[0] == 'S' && l1 < l2)
        cout << "<" << endl;
    if(s1[0] == 'S' && s2[0] == 'S' && l1 > l2)
        cout << ">" << endl;
 
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       string s1,s2;
       cin>>s1>>s2;
 
 if(s1 == s2) {
  cout<<'='<<endl;
 }
 
 else if(s1.back() == s2.back()) {
  if(s1.back() == 'S') {
   if(s1 < s2) cout<<'>'<<endl;
   else cout<<'<'<<endl;
  }
  else {
   if(s1 < s2) cout<<'<'<<endl;
   else cout<<'>'<<endl;
  }
 }
 else {
  if(s1.back() < s2.back()) cout<<'>'<<endl;
  else cout<<'<'<<endl;
    }
    }
}