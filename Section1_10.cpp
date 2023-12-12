#include <iostream>

using namespace std;
int n;
int max_ = -217000000;

int digit_sum(int x) {
	int res,sum=0;

	while (x > 0) {
		res = x % 10;
		sum += res;
		x = x / 10;
	}

	return sum;
}

int main() {
	int num,sum_=0, res;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		sum_ = digit_sum(num);
		if (max_ < sum_) {
			max_ = sum_;
			res = num;
		}
		else if (max_ == sum_) {
			if (res < num)res = num;
		}
	}
	cout << res;
	return 0;
}