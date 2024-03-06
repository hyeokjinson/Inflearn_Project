#include<cstdio>
#include<iostream>

using namespace std;

int n, m;
int _min = 2147000000;
int map[21][21];
int ch[21];

void dfs(int v,int _sum) {
	if (v == n) {
		if (_min > _sum) {
			_min = _sum;
		}
	}

	else {
		for (int i = 1; i <= n; i++) {
			if (map[v][i] != 0 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i, _sum + map[v][i]);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	
	int i,x,y,val;
	memset(ch, 0, sizeof(ch));
	memset(map, 0, sizeof(map));

	cin >> n >> m;

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &x, &y,&val);
		map[x][y] = val;
	}

	ch[1] = 1;
	dfs(1,0);

	printf("%d\n", _min);

	return 0;

}