#include<iostream>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution {
    public:
        int minSwaps(string s) {
        stack<char>st;
        for(char &ch:s) {
            if(ch=='[') {
                st.push(ch);
            }
            else {
                if(!st.empty()) {
                    st.pop();
                }
                }
        }
        return (st.size()+1)/2;
        }
};
int main() {
    solution sol;
    string s = "[]][][{[}]}";
    cout<<sol.minSwaps(s)<<endl;
    return 0;



};

      
