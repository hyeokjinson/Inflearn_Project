#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;
int n,res=-2147000000;
vector<pair<int, int>> info;

void dfs(int L, int _sum) {
	if (L == n+1) {
		if (res < _sum)res = _sum;
		return;
	}
	else {
		if (L + info[L].first <= n + 1) { dfs(L + info[L].first, _sum + info[L].second); }
		dfs(L+1, _sum);
	}
}

int main() {
	
	int i,a,b;

	cin >> n;
	info.push_back(make_pair(0, 0));
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		info.push_back(make_pair(a, b));
	}

	dfs(1, 0);
	printf("%d\n", res);

	return 0;
}