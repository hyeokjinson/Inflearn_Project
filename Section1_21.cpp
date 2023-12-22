#include<iostream>
#include <vector>
using namespace std;

typedef struct a{
    vector<int>value;
	int score=0;
};
typedef struct b {
	vector<int>value;
	int score=0;
};



int main() {
	int i,value_a,value_b;
	a a;
	b b;
	a.value.clear(); b.value.clear();

	for (int i = 0; i < 10; i++) {
		cin >> value_a;
		a.value.push_back(value_a);
	}

	for (int i = 0; i < 10; i++) { 
		cin >> value_b;
		b.value.push_back(value_b);
	}

	for (int i = 0; i < 10; i++) {
		if (a.value[i] == b.value[i]) { a.score++; b.score++; }
		else if (a.value[i] > b.value[i]) { a.score += 3; }
		else { b.score += 3; }
	}
	cout << a.score <<" " << b.score << "\n";
	if (a.score > b.score) {
		cout << "A";
	}
	else {
		cout << "B";
	}


}