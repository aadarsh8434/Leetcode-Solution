#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            int n = arr.size();
            vector<int> res;
            for (int i = 0; i < n; i++) {
                if (i + k <= n) {
                    res.push_back(arr[i + k - 1]);
                    res.push_back(arr[i]);
                    }
                    else {
                        res.push_back(arr[i]);
                        res.push_back(arr[i + k - n]);
                        }
                        }
                        sort(res.begin(), res.end());
                        res.resize(k);
                        return res;
        }
};