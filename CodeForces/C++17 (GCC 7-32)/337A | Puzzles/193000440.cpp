#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
/*void solve(){
    int n;
    cin>>n;
    int p1=0,p2=0;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            p2++;
        }
        if(s[i]=='R'){
            p1++;
        }
        if(s[i]=='D'){
            p2--;
        }
        if(s[i]=='L'){
            p1--;
        }
        if(p1==1){
           if(p2==1){
            flag=true;
            break;
        }
    }}
   if(flag==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
}*/
void solve() {
    string s;
    cin >> s;
    int len = s.size();
    //cout<<s[len-1];
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - 1]) {
            s.erase(remove(s.begin(), s.end(), 'A'), s.end());
        }
    }
    cout << s.size();
}
int main()
{
    int n, m, arr[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    sort(arr, arr + m);
    int sum = arr[n - 1] - arr[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (arr[i + n - 1] - arr[i] < sum)
        {
            sum = arr[i + n - 1] - arr[i];
        }
    }
    cout << sum << endl;
        return 0;
    }
 