#include<iostream>
#include<vector>
using namespace std;
int n;

int main() {
	int x,tmp = 0;
	vector<int> num;
	num.clear();
	cin >> n;

	for (int i = 1; i <= n; i++) {
		x = i;
		while (x > 0) {
			tmp = x % 10;
			num.push_back(tmp);
			x = x / 10;
		}
	}

	cout << num.size();
	return 0;
	
}