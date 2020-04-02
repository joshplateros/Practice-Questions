#include <iostream>
#include <vector>

int solution(std::vector<int> nums);
int main()
{
	std::vector<int> toSend = {1,2,2};

	std::cout << solution(toSend);


}

int solution(std::vector<int> nums)
{
	int result = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		//bitwise XOR
		result ^= nums[i];
	}
	return result;
}
