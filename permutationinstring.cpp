#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution {
    public:
    bool checkInclusion(string s1,string s2) {
        int n1=s1.length();
        int n2=s2.length();
      if(n1>n2) {
        return false;
      }
      vector<int>v1(26,0);
      vector<int>v2(26,0);
      for(int i=0;i<n1;i++) {
        v1[s1[i]-'a']++;
        v2[s2[i]-'a']++;
      }
      for(int i=n1;i<n2;i++) {
        if(v1==v2) {
            return true;
        }
        v2[s2[i]-'a']++;
        v2[s2[i-n1]-'a']--;
      }
      if(v1==v2) {
        return true;
      }
      else {
        return false;
      }
    }

      };
      
    // int main() {
    //     solution s;
    //     string s1="abc";
    //     string s2="adc";
    //     cout<<s.checkInclusion(s1,s2)<<endl;
    //     return 0;

    // }
    int main() {
        solution s;
        string s1="abc";
        string s2="cba";
        cout<<s.checkInclusion(s1,s2)<<endl;
        return 0;
    }

