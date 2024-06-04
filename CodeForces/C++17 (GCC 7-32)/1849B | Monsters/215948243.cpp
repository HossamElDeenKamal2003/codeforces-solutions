#include <bits/stdc++.h>
using namespace std;
bool compairpair(pair<int, int>p1, pair<int,int>p2){
    if(p1.first<p2.first)
        return false;
    else if(p1.first>p2.first)
        return true;
    return p1.second<p2.second;
}
void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        arr[i] %= k;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            ans.push_back(i+1);
    }
    vector<pair<int, int>>vec(n);
    for(int i = 0; i < n; i++){
        vec[i].first = arr[i], vec[i].second = i + 1;
    }
    sort(vec.begin(),vec.end(), compairpair);
    for(auto i : vec){
        if(i.first != 0)
            ans.push_back(i.second);
    }
    for(int k:ans){
        cout << k << ' ';
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}