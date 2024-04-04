#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int dis[201];

struct Edge {
	int s;
	int e;
	int val;
	Edge(int a, int b, int c) {
		s = a;
		e = b;
		val = c;
	}
};

int main() {
	int a, b, c, i,j,n,m,start,end;
	vector<Edge> ed;

	cin >> n >> m;

	for (i = 1; i <=n; i++) {
		dis[i] = 2147000000;
	}

	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		ed.push_back(Edge(a, b, c));
	}
	scanf("%d %d", &start, &end);
	dis[start] = 0;
	for (i = 1; i < n; i++) {
		
		for (j = 0; j < ed.size(); j++) {
			int s = ed[j].s;
			int e = ed[j].e;
			int val = ed[j].val;

			if (dis[s] != 2147000000 && dis[s] + val < dis[e]) {
				dis[e] = dis[s] + val;
			}
		}

	}
	for (j = 0; j < ed.size(); j++) {
		int s = ed[j].s;
		int e = ed[j].e;
		int val = ed[j].val;

		if (dis[s] != 2147000000 && dis[s] + val < dis[e]) {
			printf("-1\n");
			exit(0);
		}
	}
	
	printf("%d\n", dis[end]);
	return 0;

}