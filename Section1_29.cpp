#include <iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {
	int n, i, j,res=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = i; j > 0; j = j / 10) {
			if (j % 10 == 3) res++;
		}
	}
	printf("%d\n", res);
	return 0;

}