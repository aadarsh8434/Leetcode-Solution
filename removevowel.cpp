#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class solution {
    public:
   string removevowels(const string&str) {
    string result;
    for(char c:str) {
        if(!(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U') )  {
            result+=c;
        }
    }
    return result;
        }
    };
    int main() {
        solution s;
        string str = "Hello world";
        cout<< s.removevowels(str)<<endl;
        return 0;
    }
  
