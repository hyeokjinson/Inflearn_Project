#include<iostream>
#include<vector>
#include<cstdio>
#include <queue>
using namespace std;
int n;
int dx[8] = { 1,0,-1,0 ,1,-1,1,-1};
int dy[8] = { 0,1,0,-1 ,1,-1,-1,1};
int map[20][20];

struct LOC {
	int x;
	int y;
	LOC(int a, int b) {
		x = a;
		y = b;
	}
};


int main() {
	int i, j,cnt=0;
	cin >> n;
	queue<LOC> q;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (map[i][j] == 1) {
				q.push(LOC(i, j));
				map[i][j] = 0;
				while (!q.empty()) {
					LOC tmp = q.front();
					q.pop();
					map[tmp.x][tmp.y] = 0;
					for (int loc = 0; loc < 8; loc++) {
						int xx = tmp.x + dx[loc];
						int yy = tmp.y + dy[loc];
						if (map[xx][yy] == 1) {
							q.push(LOC(xx, yy));
						}
					}
				}
				cnt++;
			}
		}
	}
	printf("%d \n", cnt);

}