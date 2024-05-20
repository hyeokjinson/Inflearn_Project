#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#define x first
#define y second
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
vector<vector<int>>map(7, vector<int>(7, 0));
vector<vector<int>>dis(7, vector<int>(7, 0));

int main() {
	int i, j;
	queue<pair<int, int>>q;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			cin >> map[i][j];
		}
	}
	q.push(make_pair(0, 0));
	map[0][0] = 1;

	while (!q.empty()) {
		pair<int, int>tmp = q.front();
		q.pop();
		for (i = 0; i < 4; i++) {
			int xx = tmp.x + dx[i];
			int yy = tmp.y + dy[i];
			if (xx >= 0 && xx < 7 && yy >= 0 && yy < 7 && map[xx][yy] == 0) {
				map[xx][yy] = 1;
				q.push(make_pair(xx, yy));
				dis[xx][yy] = dis[tmp.x][tmp.y] + 1;
			}
		}

	}
	if (map[6][6] == 0) { printf("-1"); return 0; }
	else { cout << dis[6][6]; }
	
	return 0;

}