#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
class solution {
    public:
      vector<int> addToArrayForm(vector<int>& num, int k) {
        string s = to_string(k);
        int carry =0;
        int i = num.size()-1;
        for(int j= s.size();j>=0;j--) {
            int x = num[i] + (s[j] - '0') +carry;
            carry = x/10;
            num[i] = x%10;
            i--;
        }
        while(i>=0) {
            num[i] += carry;
            carry = num[i]/10;
            num[i] = num[i]%10;
            i--;
        }
        if(carry>0) {
            num.push_back(carry);
        }
        return num;
      }
};
        }
        } 
        }
}