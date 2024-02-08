#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void dfs(int n) {
	if (n > 7)return;
	else {
		//printf("%d ", n); 전위 
		dfs(n * 2);
		//printf("%d ", n); 중위
		dfs(n * 2 + 1);
		printf("%d ", n); // 후위
	}
}

int main() {
	dfs(1);
}