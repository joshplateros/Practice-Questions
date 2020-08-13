// Question https://leetcode.com/problems/number-of-good-pairs/

#include <iostream>
#include <vector>

class Solution {
	public: 
		int numIdenticalPairs(std::vector<int> & nums) {
			int pairs = 0;
			
			for (int i = 0; i < nums.size(); i++) {
				for (int j = nums.size() - 1; j > 0; j--) {
					if (nums[j] == nums[i]) {
						if (i < j) {
							pairs++;
						}
					}
				}
			}
		return pairs;
		}
};

int main() {
	std::vector<int> nums {1,2,3,1,1,3};	
	Solution acc;
	std::cout << acc.numIdenticalPairs(nums);
}
