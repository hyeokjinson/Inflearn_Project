#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void dfs(int n) {
	if (n > 7)return;
	else {
		//printf("%d ", n); ���� 
		dfs(n * 2);
		//printf("%d ", n); ����
		dfs(n * 2 + 1);
		printf("%d ", n); // ����
	}
}

int main() {
	dfs(1);
}