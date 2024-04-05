#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;
int n, r,cnt=0;
vector<int> num;
int res[100];
int ch[100];
void dfs(int L) {
	if (L == r) {
		for (int i = 0; i < L; i++) {
			printf("%d ", res[i]);
		}
		printf("\n");
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (ch[i] == 0) {
				ch[i] = 1;
				res[L] = num[i];
				dfs(L+1);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	int i,a;
	scanf("%d %d", &n, &r);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		num.push_back(a);
	}

	dfs(0);
	printf("%d\n", cnt);

	return 0;
}