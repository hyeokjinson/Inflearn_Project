#include<iostream>
#include<cstdio>
#include<queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Data{
	int money;
	int when;
	Data(int a, int b) {
		money = a;
		when = b;
	}
	bool operator<(Data const& b)const {
		return when > b.when;
	}
};


int main() {
	int n, m, d,i,j,max_=-2147000000,res=0;
	priority_queue<int> q;
	vector<Data> T;

	cin >> n;
	
	for (i = 0; i < n; i++) {
		scanf("%d %d", &m, &d);
		T.push_back(Data(m, d));
		if (d > max_) { max_ = d; }
	}

	sort(T.begin(), T.end());
	j = 0;
	for (i = max_; i >= 1; i--) {
		for (; j < n; j++) {
			if (T[j].when < i)break;
			q.push(T[j].money);
		}
		if (!q.empty()) {
			res += q.top();
			q.pop();
		}
	}

	printf("%d\n", res);
	return 0;
}