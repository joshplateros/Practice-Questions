#include <iostream>
#include <vector>

std::vector<int> smallerNumbersThanCurrent(std::vector<int> & nums)
{
	int j = 0; 
	std::vector<int> toReturn;

	while (j < nums.size())
	{
		int counter = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			int number = nums[j];
			if (nums[i] < number)
			{
				counter++;
			}

			if (nums[i] == nums.back())
			{
				toReturn.push_back(counter);
				j++;
			}
		}
	}

	return toReturn;

}



int main()
{
	std::vector<int> toSend;
	
	int array[5] = {10, 4, 9, 8, 9};

	for (int i = 0; i < 5; i++)
	toSend.push_back(array[i]);


	std::vector<int> answer = smallerNumbersThanCurrent(toSend);

	for (int i = 0; i < answer.size(); i++)
	{
		std::cout << answer[i] << std::endl;
	}	

	


}
