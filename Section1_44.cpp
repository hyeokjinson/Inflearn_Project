#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n, c;

int main() {
	int i,start=0,end=0,mid;
	scanf("%d %d", &n, &c);
	int* a = new int[n + 1];

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	end = a[n - 1];
	while (start <= end) {
		mid = (start + end) / 2;

		if()
	}
}