#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;
class solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int> map;
            stack<int> st;
            for(int i=0;i<nums.size();i++) {
                while(!st.empty() && nums2[i]>st.top()) {
                    map[st.top()]= nums2[i];
                    st.top();
                }
                st.push(nums2[i]);
            }
            vector<int> res(nums1.size());
            for(int i=0;i<nums1.size();i++) {
                if(map.find(nums1[i])!=map.end()) {
                    res[i]=map[nums1[i]];
                }
                else res[i]=-1;
            }
            return res;
        }
};
                }
            }

}