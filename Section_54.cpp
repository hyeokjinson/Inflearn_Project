#include<iostream>
#include "stdc++.h"
#include <stack>

using namespace std;

int main() {
	string str;
	stack<char> s;

	cin >> str;

	for (auto x : str) {
		if (x == '(')s.push(x);
		else {
			if (s.empty() || s.top() != '(') {
				cout << "NO";
				return 0;
			}
			s.pop();
		}
	}
	if (s.empty())cout << "YES";
	else cout << "NO";
	return 0;


}