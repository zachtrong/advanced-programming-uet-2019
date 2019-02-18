#include <bits/stdc++.h>
#include "simple_calculator.h"

using namespace std;

void calculate(int x, int y, char operation) {
	switch (operation) {
		case '+':
			cout << x + y << endl;
			break;
		case '-':
			cout << x - y << endl;
			break;
		case '*':
			cout << 1ll * x * y << endl;
			break;
		case '/':
			if (y == 0) {
				throw "Invalid divisor";
			} else {
				cout << fixed << setprecision(5) << x * 1.0 / y << endl;
			}
			break;
		default:
			return;
	}
}

