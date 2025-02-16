#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
            int n = classes.size();
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++) {
                mp[classes[i][0]]++;
            }
            for(int i=0;i<n;i++) {
                mp[classes[i][1]]--;
            }
            int sum=0;
            for(auto it=mp.begin();it!=mp.end();it++) {
                sum+=it->first*it->second;
                }
                int k=0;
                while(extraStudents>0) {
                    int max=0;
                    int maxIndex=-1;
                    for(auto it=mp.begin();it!=mp.end();it++) {
                        if(it->second>0 && (double)it->first/(it->first+it
                        ->second)>max) {
                            max=it->first/(it->first+it->second);
                            maxIndex=k;
                            }
                            k++;
                            }
                            int x=mp.begin()+maxIndex;
                            int y=mp.begin()+maxIndex+1;
                }
        }
        
        return 0.0;
};