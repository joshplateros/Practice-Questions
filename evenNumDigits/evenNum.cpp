#include <iostream>

bool secondCount(int number);

int main()
{
	int taco[2] = {123,23};
	int evenCount = 0;
	bool ans;
	int number;

	for (int i = 0; i < 2; i++)
	{
		number = taco[i];
		ans = secondCount(number);
		if (ans == true) {
			evenCount++;
		}
	}

	std::cout << evenCount << std::endl;

}

bool secondCount (int number) {
	int count = 0;
	while (number != 0) {
		number = number /10;
		++count;
	}
	if (count % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
