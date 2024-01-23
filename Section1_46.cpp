#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int a[2001];
int main() {
	int n, k, total = 0,p=0,cnt=0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total = total + a[i];
	}
	scanf("%d", &k);

	if (k>total) {
		printf("-1\n");
		return 0;
	}

	while (true) {
		p++;
		if (p > n)p = 1;
		if (a[p] == 0)continue;
		a[p]--;
		cnt++;
		if (cnt== k)break;
	}

	while (true) {
		p++;
		if (p > n)p = 1;
		if (a[p] != 0)break;
	}

	printf("%d", p);

	return 0;
}