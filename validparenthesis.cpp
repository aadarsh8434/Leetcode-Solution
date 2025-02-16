
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool isPalindrome(string s) {
           int left=0,right=s.length()-1;
           while(left<right) {
            if(!isalnum(s[left])) {
                left++;
                continue;
            }
            if(!isalnum(s[right])) {
                right--;
                continue;
            }
            if(isalpha(s[left])) {
                s[left] = tolower(s[left]);
            }
            if(isalpha(s[right])) {
                s[right] = tolower(s[right]);
            }
            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
              }
                return true;
                }
};
int main() {
    solution s;
    string str = "A man, a plan, a canal: Panama";
    cout<<s.isPalindrome(str);
    return 0;

}
          