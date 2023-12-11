#include <iostream>
#include <cstdio>
#include<stdio.h>

using namespace std;
int main() {
	char a[101], b[101];
	int p=0;
	cin >> a;

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 65 && a[i] <= 90) {
				b[p++] = a[i]+32;
			}
			else { b[p++] = a[i]; }
		}
	}
	b[p] = '\0';
	printf("%d", p);
}