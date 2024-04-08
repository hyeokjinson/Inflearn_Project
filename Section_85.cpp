#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;
int _max = -2147000000,_min=2147000000;
int n;
int num[100];
int ch[4];

void dfs(int L,int val){
	if (L == n) {
		if (val > _max)_max = val;
		if (val < _min)_min = val;
		return;
	}

	else {
		if (ch[0] > 0) {
			ch[0]--;
			dfs(L + 1, val + num[L]);
			ch[0]++;
		}
		if (ch[1] > 0) {
			ch[1]--;
			dfs(L + 1, val - num[L]);
			ch[1]--;
		}
		if (ch[2] > 0) {
			ch[2]--;
			dfs(L + 1, val * num[L]);
			ch[2]++;
		}
		if (ch[3] > 0) {
			ch[3]--;
			dfs(L + 1, val / num[L]);
			ch[3]--;
		}
	}
}

int main() {
	int i;

	cin >> n;

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 4; i++) {
		scanf("%d", &ch[i]);
	}
	dfs(1,num[0]);
	printf("%d\n", _max);
	printf("%d\n", _min);
	
	return 0;
}