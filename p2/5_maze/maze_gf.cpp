#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <math.h>
#include <cstdio>
using namespace std;

int m[8][8],visited[8][8];
int n, n2;
int cnt;
int start_x, start_y, end_x, end_y;
void dfs(int x, int y){
	if(x == end_x && y == end_y)
	{
		cnt++;
		return;
	}
	if(y - 1 >=0 && !visited[x][y-1] && !m[x][y-1]){
		visited[x][y-1] = 1;
		dfs(x, y -1);
		visited[x][y-1] = 0;	
	}
	if(y + 1 < n2 && !visited[x][y+1]&& !m[x][y+1]){
		visited[x][y+1] = 1;
		dfs(x, y +1);
		visited[x][y+1] = 0;	
	}
	if(x +1 < n && !visited[x+1][y] && !m[x+1][y]){
		visited[x+1][y] = 1;
		dfs(x+1, y);
		visited[x+1][y] = 0;	
	}
	if(x- 1 >= 0&& !visited[x-1][y]&& !m[x-1][y]){
		visited[x-1][y] = 1;
		dfs(x-1, y);
		visited[x+-1][y] = 0;	
	}
 	return;
}
int main()
{
	cin >> n >> n2;
	for(int i = 0; i < n ;i++)
	for(int j = 0; j < n2; j++)
	cin >> m[i][j];
	cin>>start_x>> start_y>>end_x>> end_y;
	start_x --;
	start_y--;
	end_x--;
	end_y--;
	visited[start_x][start_y] = 1;
	dfs(start_x,start_y);
	cout << cnt;
}

