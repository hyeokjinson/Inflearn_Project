#include<iostream>
#include<cstdio>

using namespace std;
int a[51][51];
int main() {
	int h, w,i,j,n,m,k,s,sum=0,res=-2147000000;

	scanf("%d %d", &h, &w);

	for (i = 1; i <=h; i++) {
		for (j = 1; j <= w; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &n, &m);
	
	for (i = 1; i <= h - n+1; i++) {
		for (j = 1; j <= w - m+1; j++) {
			sum = 0;
			for ( k = i; k < i + n; k++) {
				for ( s = j; s < j + m; s++) {
					sum = sum+a[k][s];
				}
			}
			if (sum > res) { 
				res = sum; 
			}
		}
	}
	printf("%d\n", res);
	return 0;
}