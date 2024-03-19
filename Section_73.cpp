#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;

int main() {
	priority_queue <int> pq;
	int num;
	while (true) {
		cin >> num;
		if (num == -1)break;
		if (pq.empty())printf("-1\n");
		pq.push(num);
		if (num == 0) {
			cout << pq.top()<<"\n";
			pq.pop();
		}
		
	}
	return 0;
}