#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,val;
	vector<int>a;
	vector<int>b;
	a.clear(); b.clear();
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> val;
		a.push_back(val);
	}

	for (int i = 0; i < n; i++) {
		cin >> val;
		b.push_back(val);
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == b[i])cout << "D";
		else if (a[i] == 1 && b[i] == 3)cout << "A"<<"\n";
		else if (a[i] == 2 && b[i] == 1)cout << "A"<<"\n";
		else if (a[i] == 3 && b[i] == 2) cout << "A"<<"\n";
		else cout << "B"<<"\n";
	}
}