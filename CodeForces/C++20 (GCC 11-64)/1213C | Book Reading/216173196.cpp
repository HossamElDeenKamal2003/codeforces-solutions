#include <iostream>
#include <vector>
#include <limits>
 
using namespace std;
int test_cases() {
    int n;
    cin >> n;
    return n;
}
long long first_number() {
    long long num1;
    cin >> num1;
    return num1;
}
long long second_number() {
    long long num2;
    cin >> num2;
    return num2;
}
vector<long long> number_which_divisble(long long num1, long long num2) {
    vector<long long>vec;
    for (int i = num2; i <= num1; i++) {
        if (i % num2 == 0)
            vec.push_back(i);
    }
    return vec;
}
short answer(short num2) {
    short ans = 0;
    if (num2 % 10 == 0)
        ans = 0;
    else if (num2 % 5 == 0)
        ans = 25;
    else if (num2 % 2 == 0)
        ans = 40;
    else
        num2 = 45;
}
short solve(short answer, short num1, short num2) {
    int x = num1 / (num2 * 10);
    int d = x * answer;
    for (int i = (x * num2 * 10) + num2; i <= num1; i += num2)
        d += i % 10;
    return d;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case = test_cases();
    while (test_case--) {
        /*long long num1 = first_number();
        long long num2 = second_number();
        short ans = answer(num2);
        cout << solve(ans, num1, num2) << endl;*/
        long long n, m, index, p, d;
        cin >> n >> m;
        if (m % 10 == 0)
            index = 0;
        else if (m % 5 == 0)
            index = 25;
        else if (m % 2 == 0)
            index = 40;
        else
            index = 45;
 
        p = n / (m * 10);
        d = p * index;
 
        for (long long i = (p * m * 10) + m; i <= n; i += m)
            d += i % 10;
 
        cout << d << endl;
    }
    return 0;
}