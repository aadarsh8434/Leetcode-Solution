#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int largestInteger(int num) {
            string str = to_string(num);
            vector<int>even,odd;
            for(char c:str) {
                int n = c - '0';
                if(n%2==0) {
                    even.push_back(n);
                }
                else {
                    odd.push_back(n);
                }
                sort(odd.begin(),odd.end());
                sort(even.begin(),even,end());
            }
            int res=0;
            for(int i=0;i<str.size();i++) {
                if(i%2==0) {
                    res = res*10+even[i/2];
                }
                else {
                    res = res*10+odd[i/2];
                }
                }
                return res;
                }
            };
              