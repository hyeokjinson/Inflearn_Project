#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> height;
	int max_ = -2147000;
	int n, val, cnt = 0;

	cin >> n;
	height.clear();
	for (int i = 0; i < n; i++) {
		cin >> val;
		height.push_back(val);
	}
	max_ = height[n - 1];
	for (int i = n - 1; i >= 0; i--) {
		if (height[i] > max_) {
			max_ = height[i];
			cnt++;
		}
	}

	cout << cnt;
}