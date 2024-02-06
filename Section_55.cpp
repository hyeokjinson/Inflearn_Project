#include<stack>
#include<iostream>
#include<vector>
#include<cstdio>
#include<stdio.h>

using namespace std;

int main() {
	int n, m,i,j=1;
	stack<int>s;
	vector<char>str;

	cin >> n;

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		s.push(m);
		str.push_back('P');
		while (true) {
			if (s.empty())break;
			if (j == s.top()) {
				str.push_back('O');
				j++;
				s.pop();
			}
			else break;
		}
	}
	if (!s.empty()) { printf("impossible"); }
	else { 
		for (i = 0; i < str.size(); i++) {
			printf("%c", str[i]);
		}
	}
	return 0;
}
