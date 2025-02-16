#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class solution {
    public:
     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums.end()) 
        }
        unordered_map<int ,int> mp1,mp2;
        for(int i=0;i<nums1.size();i++) {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++) {
            mp2[nums2[i]]++;
        }
        vector<int> res;
        for(auto it: mp1) {
            if(mp2.find(it.first)!=mp.end()) {
                res.push_back(it.first);
            }
        }
        return res;

            }
        };
    