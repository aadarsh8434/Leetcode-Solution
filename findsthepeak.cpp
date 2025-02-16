
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        vector<int> findPeaks(vector<int>& mountain) {
            int n = mountain.size();
            vector<int> peaks;
            for(int i=1;i<n-1;i++) {
                if(mountain[i-1]< mountain[i] && mountain[i]>mountain[i+1]) {
                    peaks.push_back(i);
                }
            }
            return peaks;
        }
};
int main() {
    solution s;
    vector<int> mountain = {1,4,3,8,5};
    vector<int> peaks = s.findPeaks(mountain);
    cout << "Peaks at indices: ";
    for(int i=0;i<peaks.size();i++) {
        cout << peaks[i] << " ";
        }
        cout << endl;
        return 0;

}