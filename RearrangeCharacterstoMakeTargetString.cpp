#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;
class solution {
    public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> s_map, target_map;

        for (char ch : s) {
            s_map[ch]++;
        }

        for (char ch : target) {
            target_map[ch]++;
        }

        int minCount = INT_MAX;

        for (auto &it : target_map) {
            char ch = it.first;
            int requiredCount = it.second;

            if (s_map[ch] < requiredCount) {
                return 0;
            }

            minCount = min(minCount, s_map[ch] / requiredCount);
        }

        return minCount;
    }
};
int main() {
    solution s;
    cout<< s.rearrangeCharacters("i love coding","coding")<<endl;
    return 0;

}