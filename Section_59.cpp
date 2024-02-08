#include<cstdio>
#include<iostream>

using namespace std;
int n;
int ch[11];
void dfs(int L) {
	int i;
	if (L == n + 1) {
		for (i = 1; i <= n; i++) {
			if (ch[i] == 1) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	else {
		ch[L] = 1;
		dfs(L + 1);
		ch[L] = 0;
		dfs(L + 1);
	}
}

int main() {
	scanf("%d", &n);
	dfs(1);
}