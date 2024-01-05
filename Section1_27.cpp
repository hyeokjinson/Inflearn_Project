#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main() {
	int n, i, j,tmp;

	cin >> n;
	vector<int>ch(n + 1);

	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (true) {
			if (tmp % j == 0) { 
				ch[j]++;
				tmp = tmp / j;
			}
			else j++;
			if (tmp == 1)break;
		}
	}
	printf("%d! = ", n);
	for (i = 2; i <= n; i++) {
		if (ch[i] != 0)printf("%d ", ch[i]);
	}
}