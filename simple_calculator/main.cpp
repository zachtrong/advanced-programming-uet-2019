#include <bits/stdc++.h>
#include "simple_calculator.h"
using namespace std;


int main() {
	while (true) {
		int x, y;
		char operation;
		cin >> x >> y >> operation;

		calculate(x, y, operation);
	}
	return 0;
}

