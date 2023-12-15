#include <iostream>

using namespace std;

bool isPrime(int x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)cnt++;
	}
	if (cnt == 2) return true;
	else return false;
}

int reverse(int x) {
	int res = 0,temp;
	while (x > 0) {
		temp= x % 10;
		x = x / 10;
		res = res*10+temp;
	}
	return res;
}

int main() {
	int n,num,r_num;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		r_num = reverse(num);
		if (isPrime(r_num))cout << r_num<<" ";
	}
}