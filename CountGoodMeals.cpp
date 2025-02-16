#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class solution {
    public:
        int countPairs(vector<int>& deliciousness) {
            int n = deliciousness.size();
            unordered_map<int, int> map;
            int ans = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 1; j <= 21; j++) {
                    int sum = deliciousness[i] * (1 << j);
                    if (map.find(sum) != map.end()) {
                        ans += map[sum];
                        map[sum]++;
                        }
                        else {
                            map[sum] = 1;
                            }
                            }
                            }
                            return ans;
        }
        };

