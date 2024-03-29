#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
int ch[30];
struct Edge {
	int e;
	int value;

	Edge(int a, int b) {
		e = a;
		value = b;
	}
	bool operator<(const Edge& b)const {
		return value > b.value;
	}
};

int main() {
	int n, m, a, b, c,i,res=0;
	vector<pair<int,int>>p[30];
	priority_queue<Edge> q;

	cin >> n >> m;
	
	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		p[a].push_back(make_pair(b, c));
		p[b].push_back(make_pair(a, c));
	}
	q.push(Edge(1, 0));

	while (!q.empty()) {
		Edge tmp=q.top();
		q.pop();
		int v = tmp.e;
		int val = tmp.value;
		if (ch[v] == 0) {
			ch[v] = 1;
			res += val;
			for (i = 0; i < p[v].size(); i++) {
				if (ch[p[v][i].first] == 0) {
					q.push(Edge(p[v][i].first, p[v][i].second));
				}
				
			}
		}
		
	}
	printf("%d\n", res);
	return 0;
}