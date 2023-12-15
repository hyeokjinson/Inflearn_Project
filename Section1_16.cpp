#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	char str1[101];
	char str2[101];
	int s1[60];
	int s2[60];

	scanf("%s", &str1);

	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] >= 65 && str1[i] <= 90)s1[str1[i] - 64]++;
		else s1[str1[i] - 70]++;
	}

	scanf("%s", &str2);

	for (int i = 0; str2[i] != '\0'; i++) {
		if (str2[i] >= 65 && str2[i] <= 90)s2[str2[i] - 64]++;
		else s2[str2[i] - 70]++;
	}

	for (int i = 0; i <= 52; i++) {
		if (s1[i] != s2[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;

	
}