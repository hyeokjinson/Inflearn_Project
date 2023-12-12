#include <iostream>
using namespace std;
int max_=-2147000000;
char n[101];
int chk[10] = { 0, };

int solve(char* num) {
	int x = 0,res;
	for (int i = 0; n[i] != '\0'; i++) {
		x = n[i] - 48;
		chk[x]++;
	}

	for (int i = 0; i < 10; i++) {
		if(max_<chk[i]){
			max_ = chk[i];
			res = i;
		}
		else if (max_ == chk[i]) {
			if (res < i)res = i;
		}
	}

	return res;
	

}

int main() {
	int res = 0;

	cin >> n;
	res=solve(n);

	cout << res;
	return 0;
}