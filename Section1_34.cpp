#include <iostream>
#include<cstdio>
#include <vector>

using namespace std;

int main() {
	int i, j, n,tmp;
	int arr[101];

	cin >> n;

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j+1] < arr[j]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}