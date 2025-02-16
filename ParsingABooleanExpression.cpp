#include<iostream>
#include<stdio.h>
#include<stack>
#include<vector>
using namespace std;
class solution {
    public:
    char solveoperator(vector<char>&values,char operator) {
        if(operator=='!') {
            return values[0]=='t'?'f':'t';
        }
    }
       bool parseBoolExpr(string expression) {
       int n= expression.size();
       stack<char>st;
       for(int i=0;i<n;i++) {
        if(s[i]==',') {
            continue;
            if(s[i]=='(') {
                vector<char>values;
                while(st.top()!="(") {
                    values.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char operator=st.pop();
                st.pop();
                st.push(solveoperator(values,operator));
            } else {
                st.push(s[i]);
            }
        }
        return st.top()=='t'==true?false;
       }
       
            }
            }
        }
       }


        