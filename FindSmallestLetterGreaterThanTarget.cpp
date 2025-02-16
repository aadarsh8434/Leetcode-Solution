#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        char nextGreatestLetter(vector<char>& letters, char target) {
            int n = letters.size();
            //int idx = upper_
            int idx = upper_bound(begin(letters),end(letters),target)-begin(letters);
            if(idx == letters.size()) {
                return letters[0];
            }
            return letters[idx];

            }
};