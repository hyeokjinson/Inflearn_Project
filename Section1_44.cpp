#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n, c;
int count(int len, int x[]) {
	int cnt=1,pos = x[0];
	for (int i = 1; i < n; i++) {
		if (x[i] - pos >= len) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}
int main() {
	int i,start=0,end=0,mid,res;
	scanf("%d %d", &n, &c);
	int* a = new int[n + 1];

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	end = a[n - 1];
	while (start <= end) {
		mid = (start + end) / 2;

		if (count(mid, a) >= c) {
			res = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	printf("%d", res);
	delete[] a;
	return 0;
}