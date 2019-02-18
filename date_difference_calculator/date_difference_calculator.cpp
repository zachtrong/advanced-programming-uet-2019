#include <bits/stdc++.h>
#include "date_difference_calculator.h"

namespace date_difference_calculator {

    bool is_leap_year(int yy) {
        if (yy % 4 != 0) {
            return false;
        } else if (yy % 100 != 0) {
            return true;
        } else if (yy % 400 != 0) {
            return false;
        } else {
            return true;
        }
    }

    int number_of_leap_years(int yy) {
        int years = 0;
        for (int i = 1; i < yy; ++i) {
            if (is_leap_year(i)) {
                years += 1;
            }
        }
        return years;
    }

    int convert_date_to_general(int dd, int mm, int yy) {
        int total = 0;
        for (int i = 1; i < yy; ++i) {
            total += 365 + is_leap_year(i);
        }

        for (int i = 1; i < mm; ++i) {
            total += DATES_OF_MONTH[i - 1];
        }
        if (is_leap_year(yy) && mm > 2) {
            total += 2;
        }

        total += dd;
        return total;
    }

    std::string convert_general_to_date(int general_date) {
        int year = 0, month = 0;
        for (int i = 1; i <= MAX_YEAR; ++i) {
            if (general_date > 365 + is_leap_year(i)) {
                general_date -= 365 + is_leap_year(i);
            } else {
                year = i;
                break;
            }
        }
        for (int i = 1; i <= 12; ++i) {
            int dates_of_month = DATES_OF_MONTH[i - 1];
            if (i == 2 && is_leap_year(year)) {
                dates_of_month += 1;
            }        
            if (general_date > dates_of_month) {
                general_date -= dates_of_month;
            } else {
                month = i;
                break;
            }
        }

        return std::to_string(general_date) + " " + MONTHS_OF_YEAR[month - 1] + " " + std::to_string(year);
    }

    std::string calculate_date_difference(int dd, int mm, int yy, int k) {
        int general_date = convert_date_to_general(dd, mm, yy);
        int general_date_updated = general_date + k;
        return convert_general_to_date(general_date_updated);
    }
}
