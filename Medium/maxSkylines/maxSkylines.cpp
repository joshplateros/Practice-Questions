#include <iostream>
#include <vector>

//leetcode.com/problems/max-increase-to-keep-city-skyline/

int findMin(int a, int b);

int main() {
	
	int x = 4;
	int y = 4;	
	std::vector<std::vector<int>> grid = {{3, 0, 8 ,4}, {2,4,5,7}, {9,2,6,3}, {0,3,1,0}};
	std::vector<int> topBottom;
	std::vector<int> rightLeft;

	
	int maxRight = 0;
	int maxTop = 0;

	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			// i j is doing rows first
			// j i is doing columns
			if (grid[i][j] > maxRight) {
				maxRight = grid[i][j];
			}
			if (grid[j][i] > maxTop) {
				maxTop = grid[j][i];
			}
		}
		std::cout << "Max is: " << maxTop << std::endl;

		rightLeft.push_back(maxRight);
		topBottom.push_back(maxTop);

		maxRight = 0;
		maxTop = 0;

		std::cout << std::endl;
	}

	std::cout << "Rows: ";
	for (int i = 0; i < rightLeft.size(); i++) {
		std::cout << rightLeft[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Columns: ";
	for (int i = 0; i < topBottom.size(); i++) {
		std::cout << topBottom[i] << " ";
	}
	
	int validNumber = 0;
	// To return, holds all sums
	int sum = 0;
	// To get the number to add to sums
	int difference = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size() ; j++) {
			// Valid number has to be less than rightLeft[i] and topBottom[j]	
			if(grid[i][j] < rightLeft[i]) {
				if (grid[i][j] < topBottom[j]) {
					validNumber = findMin(rightLeft[i], topBottom[j]);//Find min, of rightLeft[i] or topBottom[j], have grid[i][j] equal to min
					difference = validNumber - grid[i][j];
					sum += difference;
				}
			} else if (grid[i][j] < topBottom[i]) {
				if (grid[i][j] < rightLeft[j]) {
					validNumber = findMin(rightLeft[i], topBottom[j]);
					difference = validNumber - grid[i][j];
					sum += difference;
				}
					
			}
			
		}
		std::cout << "SUM: " << sum << std::endl;
	}

}

int findMin(int a, int b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}
