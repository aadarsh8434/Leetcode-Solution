
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
        int trapRainWater(vector<vector<int>>& heightMap) {
            int rows= heightMap.size();
            if(rows==0) return 0;
            int cols = heightMap[0].size();
            if(cols==0) return 0;
            vector<vector<bool>> visited(rows, vector<bool>(cols, false));
            vector<pair<int,pair<int,int>>> walls;
            for(int i=0;i<rows;i++) {
                for(int j=0;j<cols;j++) {
                    if(i==0 || i==rows-1 || j==0 || j==cols-1) {
                        walls.push_back({heightMap[i][j],{i,j}});
                        visited[i][j]=true;
                    }
                }
            }
            sort(walls.begin(), walls.end());
            int ans=0;
            while(!walls.empty()) {
                auto wall = walls.back();
                walls.pop_back();
                int h = wall.first;
                int i = wall.second.first;
                int j = wall.second.second;
                vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
                for(auto dir:dirs) {
                    int x = i+dir.first;
                    int y = j+dir.second;
                    bool visited = false;
                    if(x>=0 && x<rows && y>=0 && y<cols) {
                        visited = visited[x][y];
                    }
                    if(!visited) {
                        visited[x][y]=true;
                    }
                    if(x>=0 && x<rows && y>=0 && y<cols && !visited) {
                        int minH = h;
                        int minI = x;
                        int minJ = y;
                        for(int k=0;k<rows;k++) {
                            for(int l=0;l<cols;l++) {
                                if(visited[k][l]) continue;
                                if(heightMap[k][l]<minH) {
                                    minH = heightMap[k][l];
                                    minI = k;
                                    minJ = l;
                                }
                            }
                        }
                        if(minH>h) {
                            ans+=minH-h;
                            walls.push_back({minH,{minI,minJ}});
                            sort(walls.begin(), walls.end());
                        }
                    }
                }
            }
            return ans;
        }
};
                       