#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
    int union(vector<int>&nums) {
        int n = nums.size();
        vector<int> parent(n,-1);
        vector<int>rank(n,0);
        for(int i=0;i<n;i++) {
            int root = find(parent,i);
            if(root == i) {
                parent[root] = i;
                rank[root] = 1;
            }
            else {
                parent[root] = i;
            }
        }
    }
    

            }
            }
        }

    }
    }
}