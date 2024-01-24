#include<iostream>
#include<cstdio>

using namespace std;
int a[11][11];
int len[11];
int main() {
	int n, i, j,num, total = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &len[i]);
		for (j = 1; j <= n; j++) {
			a[i][j] = len[i];
		}
	}
	for (i = n; i >= 1; i--)
		scanf("%d", &len[i]);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (a[i][j] > len[j]) {
				a[i][j] = len[j];
			}
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			total = total + a[i][j];
		}
	}
	printf("%d\n", total);
	return 0;
}