#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;


int main() {
	int n, k,val,sum_=0;
	int max_ = -2147000000;
	
	cin >> n >> k;
	vector<int>temp(n);


	for (int i = 0; i < n; i++) {
		cin >> val;
		temp[i] = val;
	}
	for (int i = 0; i < k; i++) {
		sum_ = sum_ + temp[i];
	}
	max_ = sum_;
	for (int i = k; i < n; i++) {
		sum_ = sum_ + (temp[i] - temp[i - k]);
		if (sum_ > max_)max_ = sum_;
	}
	cout << max_;

}