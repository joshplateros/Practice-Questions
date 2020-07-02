#include <iostream>
#include <vector>

std::vector<int> runningSum(std::vector<int> nums);

int main()
{
	std::vector<int> nums;
	std::vector<int> ans;
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(1);

	ans = runningSum(nums);
	for (int i = 0; i < ans.size(); i++)
	{
		std::cout << ans[i] << " ";
	}
}

std::vector<int> runningSum(std::vector<int> nums)
{
	std::vector<int> result;
	int loc;
	int j = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (i == 0)
		{
			result.push_back(nums[0]);
		}
		else
		{
			result.push_back(result[j] + nums[i]);
			std::cout << "Pushing back " << result[j] + nums[i] << std::endl;
			j++;
		}
	}

	return result;
	//Maybe add previous placed element in vector?

}
