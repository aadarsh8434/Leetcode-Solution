#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Solution 
{
    const vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    struct Cell 
    {
        int time, row, col;
        bool operator>(const Cell& other) const 
        {
            return time > other.time;
        }
    };

public:
    int minTimeToReach(vector<vector<int>>& moveTime) 
    {
        int m = moveTime.size();
        int n = moveTime[0].size();
        vector<vector<int>> result(m, vector<int>(n, INT_MAX));
        priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
        result[0][0] = 0;
        pq.push({0, 0, 0});

        while (!pq.empty()) 
        {
            Cell curr = pq.top(); pq.pop();
            if (curr.row == m - 1 && curr.col == n - 1)
            {
                return curr.time;
            }

            for (auto& dir : directions) 
            {
                int newRow = curr.row + dir[0];
                int newCol = curr.col + dir[1];

                if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) 
                {
                    int moveCost = ((newRow + newCol) % 2 == 0) ? 2 : 1;
                    int wait = max(moveTime[newRow][newCol] - curr.time, 0);
                    int arrivalTime = curr.time + wait + moveCost;

                    if (result[newRow][newCol] > arrivalTime) 
                    {
                        result[newRow][newCol] = arrivalTime;
                        pq.push({arrivalTime, newRow, newCol});
                    }
                }
            }
        }

        return -1;
    }
};

int main() 
{
    vector<vector<int>> moveTime = {
        {0, 2, 1},
        {1, 3, 2},
        {4, 6, 1}
    } ;

    Solution sol;
    int result = sol.minTimeToReach(moveTime);
    cout << "Minimum time to reach destination: " << result << endl;

    return 0;
}
