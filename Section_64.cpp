#include<cstdio>
#include<iostream>

using namespace std;

int map[21][21];
int ch[21];
int n, m,cnt=0;

void dfs(int v) {

	if (v == n) {
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i);
				ch[i] = 0;
			}
		}
	}

}

int main() {
	int i,x,y;
	scanf("%d %d", &n, &m);

	for (i = 1; i <= m; i++) {
		scanf("%d %d", &x, &y);
		map[x][y] = 1;
	}
	ch[1] = 1;
	dfs(1);

	printf("%d\n", cnt);
	
	return 0;
}