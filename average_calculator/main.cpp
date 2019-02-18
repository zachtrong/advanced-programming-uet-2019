#include <bits/stdc++.h>
#include "average_calculator.h"

int number_of_curriculum;
std::vector<std::pair<int, int> > score_coefficient_of_curriculums;

int main() {
	std::printf("Tong so mon hoc can tinh DTB: ");
	std::cin >> number_of_curriculum;
	for (int i = 0; i < number_of_curriculum; ++i) {
		printf("Diem mon hoc %d: ", i + 1);
		int score, coefficient;
		std::cin >> score;
		printf("He so mon hoc %d: ", i + 1);
		std::cin >> coefficient;

		score_coefficient_of_curriculums.push_back(std::pair<int, int>(score, coefficient));
	}
	int average_score = average_calculator::calculate_average_score(score_coefficient_of_curriculums);
	std::printf("So mon hoc: %d\n", number_of_curriculum);
	std::printf("Tong so he so: %d\n", average_calculator::get_total_coefficient(score_coefficient_of_curriculums));
	std::printf("Diem trung binh cua %d mon hoc: %d\n", score_coefficient_of_curriculums.size(), average_score);
	return 0;
}
