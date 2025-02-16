#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
     int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(int i=0;i<jewels.size();i++) {
            mp[jewels[i]]++;
        }
        int count=0;
        for(int i=0;i<stones.size();i++) {
            if(mp.find(stones[i])!=mp.end()) {
                count++;
            }
        }
        return count;
     }
};

   