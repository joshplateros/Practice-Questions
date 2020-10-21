#include <iostream>
#include <vector>

std::vector<int> smallerNumbersThanCurrent(std::vector<int> & nums);

int main() {
	
	std::vector<int> nums = {10,4,9,8,9};

	smallerNumbersThanCurrent(nums);

}


std::vector<int> smallerNumbersThanCurrent(std::vector<int> & nums) {
	
	// return vector of numbers smaller than index	
	std::vector<int> toReturn;
	int iterator = 0;
	int counter = 0;
	while (iterator < nums.size()) {

		int number = nums[iterator];
		for (int i = 0; i < nums.size(); i++) {
			if (number > nums[i]) {
				counter++;
			}
		}
		iterator++;
		toReturn.push_back(counter);
		counter = 0;
	}


	return toReturn;
	

}
