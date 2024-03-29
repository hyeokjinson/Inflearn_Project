#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int dis[21];
int ch[21];
vector<pair<int, int>> edge[21];

int main() {
	int i,n, m,a,b,c;
	int min = 0;
	priority_queue<int>q;

	cin >> n >> m;
	
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		edge[a].push_back(make_pair(b, c));
	}

	for (i = 1; i <= n; i++) { dis[i] = 2147000000; }

	dis[1] = 0;
	for (i = 1; i <= n; i++) {
		min = 0;
		for (int j = 1; j <= n; j++) {
			if (ch[j] == 0 && dis[j] < dis[min]) min = j;
		}
		ch[min] = 1;
		for (int j = 0; j < edge[min].size(); j++) {
			int v = edge[min][j].first;
			int cost = edge[min][j].second;
			if (dis[v] > dis[min] + cost) {
				dis[v] = dis[min] + cost;
			}
		}
	}

	for (i = 2; i <= n; i++) {
		if (dis[i] != 2147000000)printf("%d : %d\n", i, dis[i]);
		else printf("%d : impossible\n", i);

	}
	return 0;
}