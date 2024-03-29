#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<functional>

using namespace std;

int main() {
	int num;
	priority_queue<int, vector<int>, greater<int>> pq;

	while (true) {
		cin >> num;
		if (num == -1)break;

		if (num == 0) {
			if (pq.size() == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else{ pq.push(num); }
	}
	return 0;
}