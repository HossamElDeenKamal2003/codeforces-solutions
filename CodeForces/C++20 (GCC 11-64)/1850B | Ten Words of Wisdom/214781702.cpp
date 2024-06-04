#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<int, int>> responses(n); // (number of words, quality)
        int max_quality = 0; // maximum quality of responses with 10 or fewer words
        int max_quality_index; // index of the response with highest quality
 
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            responses[i] = make_pair(a, b);
 
            if (a <= 10 && b > max_quality) {
                max_quality = b;
                max_quality_index = i;
            }
        }
 
        // output the index of the response with the highest quality among responses with 10 or fewer words
        cout << max_quality_index + 1 << endl;
    }
}