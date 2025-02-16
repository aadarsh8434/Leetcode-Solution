#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
      int trap(vector<int>& height) {
        int n = height.size();
        int left=0,right= n-1;
        int max_left=0, max_right=0;
        int ans=0;
        while(left<=right) {
            if(height[left]<= height[right]) {
                if(height[left]>= max_left) {
                    max_left = height[left];
                    ans+= max_left - height[left];
                }
                else {
                    ans+= max_left - height[left];
                }
                left++;
            }
            else {
                if(height[right]>= max_right) {
                    max_right= height[right];
                    ans+= max_right- height[right];
                }
                else {
                    ans+= max_right - height[right];
                }
                right--;
            }
        }
        return ans;
      }
};
int main() {
    solution s;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<s.trap(height)<<endl;
    return 0;
}