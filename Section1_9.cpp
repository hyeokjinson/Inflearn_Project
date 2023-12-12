#include <iostream>
#include <cstdio>

using namespace std;
int n;

void solve(int num) {
	int cnt = 0;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)cnt++;
	}
	cout << cnt << " ";
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		solve(i);
	}
	return 0;
}