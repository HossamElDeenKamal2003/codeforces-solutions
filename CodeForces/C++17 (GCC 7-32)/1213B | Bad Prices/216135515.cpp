#include <iostream>
#include <vector>
#include <limits>
 
using namespace std;
int test_cases() {
    int n;
    cin >> n;
    return n;
}
int size_of_array() {
    int n;
    cin >> n;
    return n;
}
int* elements(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}
int solve(int arr[], int n) {
    int bad_price = 0, last = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > last)
            bad_price++;
        last = min(arr[i], last);
    }
    return bad_price;
}
int main() {
    int t = test_cases();
    while (t--) {
        int n = size_of_array();
        int* arr = elements(n);
        cout << solve(arr, n) << endl;
    }
 
    return 0;
}