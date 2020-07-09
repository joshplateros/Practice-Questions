#include <iostream>

int steps = 0;
int numberOfSteps(int num);

int main()
{
	int number = 21;
	std::cout << "Passing in number -> " << number << std::endl;
	numberOfSteps(number);
	std::cout << steps << std::endl;

	return 0;

}

int numberOfSteps(int num)
{ 
	if (num == 0)
		return steps;

	if (num % 2 == 0)
	{
		steps++;
		num = num / 2;
		return numberOfSteps(num);
	}
	else 
	{
		steps++;
		num = num - 1;
		return numberOfSteps(num);
	}
}

