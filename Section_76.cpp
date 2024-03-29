#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
int dy[21][21];
int C(int a, int b) {
	if (dy[a][b] > 0)return dy[a][b];
	if (a == b || b== 0)return 1;
	else return dy[a][b] = C(a - 1, b) + C(a - 1, b - 1);
}

int main() {
	int n, r;

	scanf("%d %d", &n, &r);
	printf("%d\n", C(n, r));
	return 0;
}