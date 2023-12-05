#include<cstdio>

int main() {
	char a[100];
	int i,cnt=0,res=0;
	
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", res);

	for (i = 1; i <= res; i++) {
		if (res % i == 0)cnt++;
	}
	printf("%d", cnt);
}