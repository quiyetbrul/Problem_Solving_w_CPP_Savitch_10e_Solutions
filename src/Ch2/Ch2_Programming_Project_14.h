#include <iostream>

using namespace std;

void Ch2_Programming_Project_14() {
	int exercise_input = inputInteger("How many exercises to input? ", true);

	vector<int> scores_received(exercise_input, 0);
	vector<int> scores_possible(exercise_input, 0);

	int total_scores_received = 0;
	int total_scores_possible = 0;
	double total_scores_avg = 0.0;

	for (int i = 0; i < exercise_input; i++) {
		cout << "Scores received for exercise " << i + 1 << ": ";
		scores_received[i] = inputInteger("", true);

		cout << "Total points possible for exercise " << i + 1 << ": ";
		scores_possible[i] = inputInteger("", true);

		total_scores_received += scores_received[i];
		total_scores_possible += scores_possible[i];
	}

	total_scores_avg = total_scores_received / (double)total_scores_possible * 100;

	cout << "Your total is " << total_scores_received << " out of " << total_scores_possible << ", or " << total_scores_avg << "%" << endl;
}