#include <cstdio>
#include<iostream>

using namespace std;

int map[8][8];
int ch[8][8];
int dx[4] = {0,0,1,-1};
int dy[4] = { 1,-1,0,0 };
int cnt = 0;

void dfs(int x, int y) {
	int nx, ny;
	if (x == 7 && y == 7) {
		cnt++;
	}
	else {
		for (int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if (nx < 1 || nx>7 || ny < 1 || ny>7)continue;
			if (map[nx][ny] == 0 && ch[nx][ny] == 0) {
				ch[nx][ny] = 1;
				dfs(nx, ny);
				ch[nx][ny] = 0;
			}
		}
	}
}


int main() {
	int i, j;
	memset(map, 0, sizeof(map));
	memset(ch, 0, sizeof(ch));

	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= 7; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	ch[1][1] = 1;
	dfs(1, 1);
	printf("%d\n", cnt);
}