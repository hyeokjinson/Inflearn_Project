#include<cstdio>
#include<iostream>
#include<vector>
#define x first
#define y second


using namespace std;
vector<pair<int, int>> map[30];
int n, m;
int ch[30];
int cost= 2147000000;


void dfs(int v, int _sum) {
	if (v == n) {
		if (cost > _sum) { cost = _sum; }
	}
	else {
		for (int i = 0; i < map[v].size(); i++) {
			if (ch[map[v][i].x]==0) {
				ch[map[v][i].x] = 1;
				dfs(map[v][i].x, _sum + map[v][i].y);
				ch[map[v][i].x] = 0;
			}
		}
	}
}

int main() {
	int i, x, y,val;

	cin >> n >> m;

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &x, &y,&val);
		map[x].push_back(make_pair(y, val));
	}
	ch[1] = 1;
	dfs(1, 0);

	printf("%d\n", cost);
	return 0;
}