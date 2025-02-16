#include <iostream>
using namespace std;

int replaceZerosWithOnesInInteger(int num) {
    if (num == 0) {
        return 1;
    }
    int result = 0, placeValue = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        result = digit * placeValue + result;
        num = num / 10;
        placeValue = placeValue * 10;
    }
    return result;
}

int main() {
    int n = 204;
    int result = replaceZerosWithOnesInInteger(n);
    cout << "After replacing zeros with ones " << n << " becomes " << result;
    return 0;
}