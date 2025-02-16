
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<=r) {
            if(people[l]+ people[r]<=limit) {
                l++;
                r--;
            }
            else {
                r--;
            }
            ans++;
        }
        return ans;
    }
};
int main() {
    solution s;
    vector<int> people = {3,2,2,1};
    int limit =3;
    cout<<s.numRescueBoats(people,limit)<<endl;
    return 0;
}