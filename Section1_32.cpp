#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {
	int n,tmp,idx;
	cin >> n;
	vector<int>num(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	for (int i = 0; i < n; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (num[idx] > num[j]) {
				idx = j;
			}
			tmp = num[i];
			num[i] = num[idx];
			num[idx] = tmp;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}