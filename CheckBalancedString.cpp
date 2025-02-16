#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        bool isBalanced(string num) {
            int n = num.size();
            vector<int> stack;
            for(int i=0;i<n;i++) {
                if(num[i] == '(') stack.push_back(i);
                else if(num[i] == ')') {
                    if(stack.empty()) return false;
                    stack.pop_back();
                    if(!stack.empty()) stack.back() = i;
                }
                else stack.back() = i;
            }
            return stack.empty();
        }
};