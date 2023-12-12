#include <cstdio>
#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
	int i,cnt=0;
	char a[31];
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(')cnt++;
		else if(a[i]==')'){ cnt--; }
	}
    if (cnt==0) { printf("YES"); return 0; }
	else { printf("NO"); }
	return 0;
}