#include <iostream>
#include <vector>


//leetcode.com/problems/shuffle-the-array [Easy]

std::vector<int> shuffleArray (std::vector<int> & nums, int n);

int main()
{
	std::vector<int> nums;
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(7);
	int n = 3;
	std::vector<int> ans = shuffleArray(nums, n);	

	for (int i = 0; i < ans.size(); i++)
	{
		std::cout << ans[i] << " ";
	}


}

std::vector<int> shuffleArray (std::vector<int> & nums, int n)
{
	int size = 2 * n;
	std::vector<int> firstArray;
	std::vector<int> secondArray;
	std::vector<int> ans;

	for (int i = 0; i < n; i++)
	{
		firstArray.push_back(nums[i]);
	}
	for (int i = size/2; i < size; i++)
	{
		secondArray.push_back(nums[i]);
	}

	for (int i = 0; i < n; i++)
	{
		ans.push_back(firstArray[i]);
		ans.push_back(secondArray[i]);
	}


	return ans;

}
