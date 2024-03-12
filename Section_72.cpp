#include<iostream>
#include<vector>
#include<cstdio>
#include<queue>

using namespace std;

int main() {
	queue<int> q;
	int i,n, k,cnt=0;

	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		
		for (i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();

		if (q.size() == 1) {
			printf("%d\n", q.front());
			break;
		}
		
	}
	return 0;
}