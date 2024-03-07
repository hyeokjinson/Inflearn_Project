#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

queue<int>q;
vector<int>map[21];
int ch[21];
int dis[21];

int main() {
	int i,n, m,a,b,x;
	
	cin >> n >> m;

	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	q.push(1);
	ch[1] = 1;
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
				ch[map[x][i]] = 1;
			}
		}
	}
	for (i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
	return 0;
}