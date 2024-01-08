#include <iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {
	int n, i, j,tmp,idx,cnt=0;

	cin >> n;
	vector<int>s(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}

	for (i = 0; i < n - 1; i++) {
		idx = i;
		
		for (j = i + 1; j < n; j++) {
			if (s[idx] < s[j])idx = j;
		}
		tmp = s[i];
		s[i] = s[idx];
		s[idx] = tmp;
	}
	for (i = 1; i < n; i++) {
		if (s[i - 1] != s[i])cnt++;
		if (cnt == 2) {
			printf("%d\n", s[i]);
			break;
		}
	}
	return 0;
}