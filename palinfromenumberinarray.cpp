#include <iostream>
#include <vector>
using namespace std;

int palindrome(int num) {
    int temp = num;
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev == temp ? 1 : 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (palindrome(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}
