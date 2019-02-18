#ifndef DATE_DIFFERENCE_CALCULATOR_H
#define DATE_DIFFERENCE_CALCULATOR_H

namespace date_difference_calculator {
    const int MAX_YEAR = 10000;
    const std::string MONTHS_OF_YEAR[12] = {"Jan", "Feb", "Mar", "Apr", "May", 
        "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    const int DATES_OF_MONTH[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int convert_date_to_general(int dd, int mm, int yy);
    std::string convert_general_to_date(int general_date);
    std::string calculate_date_difference(int dd, int mm, int yy, int k);
}

#endif
