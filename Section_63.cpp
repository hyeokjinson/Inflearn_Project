#include<cstdio>
#include<iostream>

using namespace std;

int main() {
	int n, m,i,j,x,y,val;
	int arr[21][21];

	memset(arr, 0, sizeof(arr));
	
	cin >> n >> m;
	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &x, &y, &val);
		arr[x][y] = val;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}