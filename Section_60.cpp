#include<cstdio>
#include<iostream>

using namespace std;
int arr[11];
int n;
int total = 0;
bool flag = false;

void dfs(int L, int _sum) {
	if (_sum > total / 2)return;
	if (flag == true)return;
	if (L == n + 1) {
		if (_sum == total - _sum) {
			flag = true;
			return;
		}
	}
	else{
		dfs(L + 1, _sum + arr[L]);
		dfs(L + 1, _sum);
	}

}

int main() {
	int i;
	
	cin >> n;

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	dfs(1, 0);
	if (flag == true) { printf("YES"); }
	else { printf("NO"); }

	return 0;

}
