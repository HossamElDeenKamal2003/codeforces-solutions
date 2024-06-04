#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> x, y;
        for (int i = 0; i < 4; i++) {
            int xi, yi;
            cin >> xi >> yi;
            x.push_back(xi);
            y.push_back(yi);
        }
        int minX = *min_element(x.begin(), x.end());
        int maxX = *max_element(x.begin(), x.end());
        int minY = *min_element(y.begin(), y.end());
        int maxY = *max_element(y.begin(), y.end());
 
        // Calculate the side length of the square
        int sideLength = max(maxX - minX, maxY - minY);
 
        // Calculate the area of the square
        int area = sideLength * sideLength;
 
        std::cout << area << std::endl;
    }
 
    return 0;
}