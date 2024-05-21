#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>

#define x first
#define y second


using namespace std;

struct LOC {
	int x;
	int y;

	LOC(int a, int b) {
		x = a;
		y = b;
	}
};

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int map[1001][1001];
int dis[1001][1001];
int res = -2147000000;
int main() {
	int m, n,i,j;
	queue<LOC>q;
	cin >> m >> n;

	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				q.push(LOC(i,j));
			}
		}
	}
	while (!q.empty()) {
		LOC tmp = q.front();
		q.pop();

		for (i = 0; i < 4; i++) {
			int xx = tmp.x + dx[i];
			int yy = tmp.y + dy[i];
			if (xx >= 1 && xx <= m && yy >= 1 && yy <= n && map[xx][yy] == 0) {
				map[xx][yy] = 1;
				dis[xx][yy] = dis[tmp.x][tmp.y] + 1;
				q.push(LOC(xx, yy));
			}
		}
	}
	int flag = 1;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == 0) {
				flag = 0;
				break;
			}
		}
	}
	if (flag == 1) {
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				if (res < dis[i][j])res = dis[i][j];
			}
		}
		printf("%d", res);
	}
	else { printf("-1"); }
	
	return 0;
}