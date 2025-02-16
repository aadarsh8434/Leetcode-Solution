#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
      int stringCount(int n) {
        int count =0;
        while(n>0) {
            if(n%2==0) {
                n = n/2;
                count++;
            }
            else {
                n = n-1;
                count++;
            }
            if(n==0) {
                return count;
            }
        }
      }
};
int main() {
    solution s;
    cout<<s.stringCount(4)<<endl;
    return 0;
}
