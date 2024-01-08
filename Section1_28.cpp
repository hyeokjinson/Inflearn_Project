#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main() {
	int i,j,n,tmp,cnt1=0,cnt2=0;
	cin >> n;
	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (true) {
			if (tmp % j == 0) {
				if (j == 2)cnt1++;
				else if (j == 5)cnt2++;
				tmp = tmp / j;
			}
			else j++;
			if (tmp == 1)break;
		}
	}
	if (cnt1 < cnt2)printf("%d\n", cnt1);
	else printf("%d\n", cnt2);

	return 0;
}