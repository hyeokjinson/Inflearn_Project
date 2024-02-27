#include<cstdio>
#include<iostream>

using namespace std;
int n, m;
int a[11];
int cnt = 0;
void dfs(int L, int _sum) {
	if (L == n + 1) {
		if (_sum == m) { cnt++; }
	}
	else {
		dfs(L + 1, _sum + a[L]);
		dfs(L + 1, _sum);
		dfs(L + 1, _sum - a[L]);
	}
}

int main() {
	int i;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	dfs(1, 0);

	if (cnt == 0) { printf("-1\n"); }
	else { printf("%d\n", cnt); }

	return 0;
}