#include <iostream>
#include <vector>

int solution (int number);

int main () {

	std::cout << solution(10);


}

int solution (int number) {
	std::vector<int> mult;
	int finalAnswer = 0;

	for (int i = 0; i < number; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			mult.push_back(i);
		}
	}

	for (int i = 0; i < mult.size(); i++) {
		finalAnswer += mult[i];
	}

	return finalAnswer;
}
