#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
class solution {
    public:
        vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
            int sumAlice = 0, sumBob = 0;
            for(int i=0;i<aliceSizes.size();i++) {
                sumAlice += aliceSizes[i];
            }
            for(int i=0;i<bobSizes.size();i++) {
                sumBob += bobSizes[i];
            }
            int diff = (sumAlice - sumBob)/2;
            for(int i=0;i<aliceSizes.size();i++) {
                for(int j=0;j<bobSizes.size();j++) {
                    if((aliceSizes[i] - bobSizes[j])==diff) {
                        return {aliceSizes[i],bobSizes[j]};
                    }
                }
            }
            return vector<int>();
        }

                    };
                    int main() {
                        solution s;
                        vector<int> aliceSizes = {1,2};
                        vector<int> BobSizes = {2,3};
                        vector<int>result = s.fairCandySwap(aliceSizes,BobSizes);
                        cout<<result[0]<<" "<<result[1]<<endl;
                        return 0;


                    }
   