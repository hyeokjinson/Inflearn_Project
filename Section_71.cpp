#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>

using namespace std;
int jump[3] = { 1,-1,5 };

int main() {
	int s, e, i,val,pos=0;
	int ch[10001];
	queue<int> q;
	memset(ch, 0, sizeof(ch));
	scanf("%d %d", &s, &e);

	ch[s] = 1;
	q.push(s);

	while (!q.empty()) {
		val = q.front();
		q.pop();
	
		for (i = 0; i < 3; i++) {
			pos = val + jump[i];
			if (pos <= 0 || pos > 10000) { continue; }
			if (pos== e) {
				printf("%d\n", ch[val]);
				exit(0);
			}
			else if(ch[pos]==0) {
				ch[pos] = ch[val] + 1;
				q.push(pos);
			}
		}
	}
	return 0;
}