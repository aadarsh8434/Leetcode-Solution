#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;
class solution {
    public:
     int maximumValue(vector<string>& strs) {
         int maxValue = 0;

        for (const string& str : strs) {
            bool isNumeric = true;
            int value = 0;

            for (char ch : str) {
                if (!isdigit(ch)) {
                    isNumeric = false;
                    break;
                }
            }

            if (isNumeric) {
                value = stoi(str);
            } else {
                value = str.size();
            }

            maxValue = max(maxValue, value);
        }

        return maxValue;
    }
};
int main() {
    solution s;
    vector<string> strs = {"alic3","bob","3","4","00000"};
    cout<< s.maximumValue(strs)<<endl;
    return 0;
}


  