#include <iostream>
#include <vector>

void plusMinus(std::vector<int> arr)
{
	float pos = 0;
	float neg = 0;
	float zero = 0;
	int n = arr.size();

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			zero++;
		}
		if (arr[i] < 0)
		{
			neg++;
		}
		if (arr[i] > 0)
		{
			pos++;
		}
	}
	std::cout << pos / n << std::endl;
	std::cout << neg / n << std::endl;
	std::cout << zero / n << std::endl;

}	

int main()
{
	std::vector<int> arr {-4, 3, -9, 0, 4, 1};

	plusMinus(arr);
	

	return 0;

}	
