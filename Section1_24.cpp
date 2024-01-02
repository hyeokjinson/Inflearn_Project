#include<iostream>
#include<cstdio>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int n,pre,now,i,j,val;

	scanf("%d", &n);
	scanf("%d", &pre);

	vector<int>check(n);

	for (i = 1; i < n; i++) {
		scanf("%d", &now);
		val = abs(now - pre);
		if (val > 0 && val < n && check[val] == 0)check[val] = 1;
		else {
			printf("NO");
			return 0;
		}
		pre = now;
	}
	printf("YES");
	return 0;
}