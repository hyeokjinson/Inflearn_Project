#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int map[51][51];
int dx[4] = {0,0,1,-1};
int dy[4] = { 1,-1,0,0 };
int main() {
	int n,flag=0,cnt=0,i,j,k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			flag = 0;
			for (k = 0; k < 4; k++) {
				if (map[i + dy[k]][j + dx[k]] >= map[i][j]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) { cnt++; }
		}
	}
	printf("%d", cnt);
	
	return 0;
}