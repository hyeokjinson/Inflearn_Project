#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n,val;

	cin >> n;
	vector<int>a(n);
	vector<int>s(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		s[i] = 1;

	}

	for (int i = 0; i < n; i++) {
		for (int j =1; j < n; j++) {
			if (a[i] <a[j])s[i]++;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", s[i]);
	}

	return 0;
}