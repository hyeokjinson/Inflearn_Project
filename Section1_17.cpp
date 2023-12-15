#include <iostream>

using namespace std;

int main() {
	int n, num, res,ans;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num >> res;
		for (int j = 1; j <= num; j++) {
			ans += j;
		}
		if (res == ans)cout << "YES"<<"\n";
		else cout << "NO"<<"\n";
	}

}