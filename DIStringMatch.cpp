#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     vector<int> diStringMatch(string s) {
    int n = s.size();
        vector<int> res;
        int low = 0, high = n;

        for (char c : s) {
            if (c == 'I') {
                res.push_back(low++);
            } else { 
                res.push_back(high--);
            }
        }
        res.push_back(low); 
        return res;
     }
};
int main() {
    solution solution;
    string s = "IDID";  
    vector<int> result = solution.diStringMatch(s);   
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}