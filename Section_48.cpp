#include<iostream>
#include<cstdio>

using namespace std;
int map[9][9];
int main(){
	int i, j, total = 0,c,max_=0,average;

	for (i = 0; i < 9; i++) {
		total = 0; c = 2147000000; max_ = 0; average = 0;
		for (j = 0; j < 9; j++) {
			scanf("%d", &map[i][j]);
			total = total + map[i][j];
		}
		average = (total / 9.0)+0.5;
		printf("%d ",average);

		for (j = 0; j < 9; j++) {
			if (c >abs(average - map[i][j])) {
				c = abs(average - map[i][j]);
				max_ = map[i][j];
			}
			else if (c == abs(average - map[i][j])) {
				if (map[i][j] > max_) { max_ = map[i][j]; }
			}
		}
		printf("%d\n", max_);
	}
	return 0;
}