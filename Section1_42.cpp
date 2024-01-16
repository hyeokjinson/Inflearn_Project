#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m,i,start=0,end=0,tmp;
	int mid;
	scanf("%d %d", &n, &m);
	vector<int>num;
	for (i = 0; i < n; i++) {
		scanf("%d", &tmp);
		num.push_back(tmp);
	}
	sort(num.begin(), num.end());
	end = n - 1;
	while (start<=end) {
		mid = (start + end) / 2;
		if (num[mid] == m) {
			printf("%d", mid + 1);
			break;
		}
		else if (num[mid] > m) {
			end = mid-1;
		}
		else { start += mid+1; }

	}
	return 0;

}