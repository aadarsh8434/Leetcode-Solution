#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
        string tictactoe(vector<vector<int>>& moves) {
            int n = moves.size();
            unordered_map<int,int> row,col,dia;
            for(int i=0;i<n;i++) {
                int x = moves[i][0],y = moves[i][1];
                row[x] ++;
                col[y]++;
                if(x==y) dia[1]++;
                if(x+y==n-1) dia[2]++;
            }
            for(int i=0;i<n;i++) {
                if(row[i]==n) return "A";
                if(col[i]==n) return "B";
                if(dia[1]==n) return "A";
                if(dia[2]==n) return "B";
            }
            return "Draw";
        }

            };
            }
}