#include<bits/stdc++.h>
using namespace std;

int numIslands(vector<vector<char>>& grid){
    if(grid.empty()) return 0;
    int rwos = grid.size();
    int col = grid[0].size();
    int count = 0;
    vector<vector<bool>> visited(rwos,vector<bool>(col,false));
    int dirX[] = {-1,1,0,0};
    int dirY[] = {0,0,-1,1};
    for(int i=0;i<rwos;i++){
        for(int j=0;j<col;j++){
            if(grid[i][j] == '1' && !visited[i][j]){
                count++;
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j] = true;
                while(!q.empty()){
                    auto p = q.front();
                    int x = p.first;
                    int y = p.second;
                    q.pop();
                    for(int d=0; d<4; d++){
                        int newX = x + dirX[d];
                        int newY = y + dirY[d];
                        if(newX>=0 && newX<rwos && newY>=0 && newY<col && grid[newX][newY]=='1' && !visited[newX][newY]){
                            visited[newX][newY] = true;
                            q.push({newX,newY});
                        }
                    }
                }
            }
        }
    }

}
int main(){
    int rows,cols;
    cout<<"Enter number of rows and columns in the grid:";
    cin>>rows>>cols;
    vector<vector<char>> grid(rows,vector<char>(cols));
    cout<<"Enter the grid (0s and 1s):"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>grid[i][j];
        }
    }
    int result = numIslands(grid);
    cout<<"Number of Islands: "<<result<<endl;
    return 0;
}