#include<cstdio>
#include<iostream>

void dfs(int n) {
	if (n == 0)return;
	else {
			dfs(n / 2);
			printf("%d", n % 2);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	dfs(n);
}