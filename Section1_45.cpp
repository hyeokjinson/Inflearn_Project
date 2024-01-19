#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, k,p=0,cnt=0,bp=0;

	scanf("%d %d", &n, &k);
	vector<int>num(n + 1);

	while (true) {
		p++;
		if (p > n)p = 1;
		if (num[p] == 0) {
			cnt++;
			if (cnt == k) {
				num[p] = 1;
				cnt = 0;
				bp++;
			}
		}
		if (bp == n - 1)break;
	}
	for (int i = 1; i <= n; i++) {
		if (num[i] == 0) {
			printf("%d", i);
		}
	}
	return 0;
}