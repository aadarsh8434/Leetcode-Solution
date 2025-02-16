#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class solution {
    public:
     int romanToInt(string s) {
        int ans = 0;
        int len = s.length();
        for(int i=0;i<len;i++) {
            switch(s[i]) {
                case 'I':
                if (i + 1 < len && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                        ans -= 1;
                    } else {
                        ans += 1;
                    }
                    break;
                case 'V':
                ans += 5;
                break;
                case 'X':
                if (i + 1 < len && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                        ans -= 10;
                    } else {
                        ans += 10;
                    }
                    break;
                //break;
                case 'L':
                ans += 50;
                break;
                case 'C':
               if (i + 1 < len && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                        ans -= 100;
                    } else {
                        ans += 100;
                    }
                    break;
                //break;
                case 'D':
                ans +=500;
                break;
                case 'M':
                ans += 1000;
                break;
            }
        }
        return ans;
     }
};
int main() {
    solution s;
    cout<<s.romanToInt("VIII")<<endl;
    cout<<s.romanToInt("XX")<<endl;
    cout<<s.romanToInt("XL")<<endl;
    return 0;
}




  