#include <bits/stdc++.h>
#include "date_difference_calculator.h"

int main() {
    int dd, mm, yy;
    std::cin >> dd >> mm >> yy;
    int k;
    while (std::cin >> k) {
        if (k == 0) {
            break;
        }

        std::string ans = date_difference_calculator::calculate_date_difference(dd, mm, yy, k);
        std::cout << ans << std::endl;
    }
}
