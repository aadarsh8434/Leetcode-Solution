#include<iostream>
#include<vector>
#include<stdio.h>
#include<map>
using namespace std;
class solution {
    public:
      string intToRoman(int num) {
      map<int,string>romanNumerals;
      romanNumerals[1000]="M";
      romanNumerals[900]="CM";
      romanNumerals[500]="D";
      romanNumerals[400]="CD";
      romanNumerals[100]="C";
      romanNumerals[90]="XC";
      romanNumerals[50]="L";
      romanNumerals[40]="XL";
      romanNumerals[10]="X";
      romanNumerals[9]="IX";
      romanNumerals[5]="V";
      romanNumerals[4]="IV";
      romanNumerals[1]="I";
      string result="";
      for(auto it=romanNumerals.rbegin();it!=romanNumerals.rend();++it) {
        while(num>=it->first) {
            result+=it->second;
            num-=it->first;
        }
      }
      return result;
        }
      };
      int main() {
        solution s;
        cout<<s.intToRoman(4)<<endl;
        cout<<s.intToRoman(5)<<endl;
        cout<<s.intToRoman(500)<<endl;
      }