#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       
        bool isHeavy = mass > 100;
        bool isBulky = (length >= 10000 || width >= 10000 || height >= 10000 || 
                        (length * width * height) >= 1000000000);
        if (isHeavy && isBulky) {
            return "Both";
        } else if (isHeavy) {
            return "Heavy";
        } else if (isBulky) {
            return "Bulky";
        } else {
            return "Neither";
        }
    }
};

int main() {
    Solution solution;
    cout << solution.categorizeBox(1000, 2000, 3000, 150) << endl; // Example usage
    return 0;
}