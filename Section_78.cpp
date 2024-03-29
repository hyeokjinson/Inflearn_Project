#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
#include<functional>


using namespace std;

int parent[1001];

struct Edge {
	int s;
	int e;
	int val;

	Edge(int a, int b, int value) {
		s = a;
		e = b;
		val = value;
	}
	bool operator<(const Edge& b) {
		return val < b.val;
	}
};

int find(int v) {
	if (parent[v] == v)return v;
	else { return parent[v] = find(parent[v]); }
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b)parent[a] = b;
}

int main() {
	int v, e, i,a,b,val;
	int res = 0;
	vector<Edge> p;

	scanf("%d %d", &v, &e);
	
	for (i = 1; i <= v; i++) {
		parent[i] = i;
	}

	for (i = 0; i < e; i++) {
		scanf("%d %d %d", &a, &b, &val);
		p.push_back(Edge(a, b, val));
	}
	sort(p.begin(), p.end());

	for (i = 0; i < e; i++) {
		int fa = find(p[i].s);
		int fb = find(p[i].e);
		if (fa != fb) {
			res += p[i].val;
			Union(p[i].s, p[i].e);
		}
	}

	printf("%d\n", res);
	return 0;
}