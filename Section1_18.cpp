#include<iostream>

using namespace std;


int main() {

	int cnt = 0, n, m,val;
	int max_ = -2147000;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> val;
		if (m < val)cnt++;
		else cnt = 0;

		if (cnt > max_)max_ = cnt;
	}
	cout << max_;
}