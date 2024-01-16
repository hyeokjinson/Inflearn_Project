#include<iostream>
#include<cstdio>

using namespace std;

int n,a[1001];

int count(int s) {
	int sum=0, i,cnt=1;

	for (i = 0; i < n; i++) {
		if (sum + a[i] > s) {
			sum = a[i];
			cnt++;
		}
		else { sum = sum + a[i]; }
	}
	return cnt;
}

int main() {
	int m, i,mid,start=0,end=0,res;
	int max_ = -2147000000;
	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		end = end + a[i];
		if (a[i] > max_)max_ = a[i];
	}

	while (start <=end) {
		mid = (start + end) / 2;

		if(mid>=max_ && count(mid)<=m){
			res = mid;
			end = mid - 1;
		}
		else { start = mid + 1; }

	}
	printf("%d", res);
}