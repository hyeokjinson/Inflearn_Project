#include <cstdio>
#include<iostream>
#include <vector>

using namespace std;

int main() {
	int n,i,p2,p3,p5,min=2147000000;
	int a[1501];

	scanf("%d", &n);

	a[1] = 1;
	p2 = p3 = p5 = 1;

	for (i = 2; i <= n; i++) {
		if (a[p2] * 2 < a[p3] * 3)min = a[p2] * 2;
		else min = a[p3] * 3;
		if (a[p5] * 5 < min)min = a[p5] * 5;
		if (min == a[p2] * 2)p2++;
		if (min == a[p3] * 3)p3++;
		if (min == a[p5] * 5)p5++;
		a[i] = min;
		//printf("p2 : %d p3: %d p4: %d\n", a[p2], a[p3], a[p5]);

	}
	printf("%d\n", a[n]);
	return 0;
}