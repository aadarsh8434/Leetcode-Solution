#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i][0] < nums2[j][0]) {
                result.push_back(nums1[i]);
                i++;
                }
                else if(nums1[i][0] > nums2[j][0]) {
                    result.push_back(nums2[j]);
                    j++;
                    }
                    else {
                        result.push_back({nums1[i][0], nums1[i][1] + nums2
                        [j][1]});
                        i++;
                        j++;
                        }
                        }
                        while(i<nums1.size()) {
                            result.push_back(nums1[i]);
                            i++;
                        }
                        while(j<nums2.size()) {
                            result.push_back(nums2[j]);
                            j++;
                        }
                        return result;
    }
};
int main() {
    solution s;
    vector<vector<int>> nums1 = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> nums2 = {{1,4},{4,7},{6,9}, {10,16}};
    vector<vector<int>> result = s.mergeArrays(nums1, nums2);
    return 0;
}
                      
