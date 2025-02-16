#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
// #include<sort>
using namespace std;
class solution {
    public:
        vector<string> removeSubfolders(vector<string>& folder) {
           unordered_set<string>st(begin(folder),end(folder));
           vector<string>ans;
           for(string currFolder : folder) {
            bool issubfolder=false;
            string tempFolder=currFolder;
            while(!currFolder.empty()) {
                size_t position=currFolder.find_last_of('/');
                currFolder=currFolder.substr(0,position);
                if(st.find(currFolder))!=st.end() {
                    issubfolder=true;
                    break:
                }
            }
            if(!isSubFolder) {
                ans.push_back(currFolder);
            }
            

            }
        
            }


            }
           }