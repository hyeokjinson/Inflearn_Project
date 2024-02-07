#include<iostream>
#include<cstdio>

void DFS(int n) {
	if (n == 0)return;
	else {
		DFS(n - 1);
		printf("%d ", n);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	DFS(n);

	return 0;
}