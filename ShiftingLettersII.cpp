#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
class solution {
    public:
        string shiftingLetters(string s, vector<vector<int>>& shifts) {
         int n = s.length();
         vector<int>diff(n,0);
         // step1 build the diff array
         for(auto &query : shifts) {
            int L= query[0];
            int R = query[1];
            int dir = query[2];
            int x;
            if(dir == 0) 
                x=-1;
            else
            diff[L]+=x;
            if(R+1<n)
            diff[R+1]-=x;
         }
         //step2 - find commulative sum to find the resultant change/shift in the index i
         for(int i=1;i<n;i++) {
            diff[i]+=diff[i-1];
         }
         //now apply the shift/change
         for(int i=0;i<n;i++) {
            int shift = diff[i]%26;
            if(shift<0) {
                shift+=26;
            }
            s[i] = (((s[i]-'a')+shift)%26)+'a';
         }
         return s;
        }
};

    