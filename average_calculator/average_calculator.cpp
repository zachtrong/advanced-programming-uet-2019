#include <bits/stdc++.h>
#include "average_calculator.h"

namespace average_calculator {
	int get_total_coefficient(std::vector<std::pair<int, int> > score_coefficient_of_curriculums) {
		int sum_coefficient = 0;
		for (int i = 0; i < score_coefficient_of_curriculums.size(); ++i) {
			std::pair<int, int> score_coefficient = score_coefficient_of_curriculums[i];
			sum_coefficient += score_coefficient.second;
		}
		return sum_coefficient;
	}

	int calculate_average_score(std::vector<std::pair<int, int> > score_coefficient_of_curriculums) {
		int sum_score = 0;
		int sum_coefficient = 0;
		for (int i = 0; i < score_coefficient_of_curriculums.size(); ++i) {
			std::pair<int, int> score_coefficient = score_coefficient_of_curriculums[i];
			sum_score += score_coefficient.first * score_coefficient.second;
			sum_coefficient += score_coefficient.second;
		}
		return sum_score / sum_coefficient;
	}
}
