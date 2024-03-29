#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int parent[3000];

int find(int v) {
	if (parent[v] == v)return v;
	else { return parent[v] = find(parent[v]); }
}

void Union(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y)parent[x] = y;
}

int main() {
	int i,n, m,a,b;
	int fa, fb;
	cin >> n >> m;

	for (i = 1; i <= n; i++) {
		parent[i] = i;
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	scanf("%d %d", &a, &b);
	fa = find(a);
	fb = find(b);

	if (fa == fb) { printf("YES\n"); }
	else { printf("NO\n"); }
	
	return 0;
}