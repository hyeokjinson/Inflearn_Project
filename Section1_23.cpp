#include <iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {
	int n, i, pre, now, cnt, max;
	scanf("%d", &n);
	scanf("%d", &pre);
	cnt = 1;
	max = 1;
	for (i = 2; i <= n; i++) {
		scanf("%d", &now);
		if (now >= pre) {
			cnt++;
			if (cnt > max) max = cnt;
		}
		else cnt = 1;
		pre = now;
	}
	printf("%d\n", max);
	return 0;
}