#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
 
void nextPrime(int n, int k)
{
    if (n <= 1)
        cout << "NO";
 
    int prime = n;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    if(prime == k){
        cout << "YES \n";
    }
    else{
        cout << "NO \n";
    }
}
 
// Driver code
int main()
{
    int n, k;
    cin >> n >> k;
    nextPrime(n, k);
 
    return 0;
}