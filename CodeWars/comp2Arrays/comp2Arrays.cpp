#include <iostream>
#include <vector>
#include <algorithm>

class Same {
	public: 
		static bool comp(std::vector<int>, std::vector<int>);



};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
	std::vector<int> squared;
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		squared.push_back(a[i] * a[i]);
	}

	for (int i = 0; i < squared.size(); i++) {
		//Problem here
		if (std::count(b.begin(), b.end(), squared[i])) {
			count++;
		}
	}
	if (count == b.size()) {
		return true;
	} else
		return false;

}
int main () {
	
	Same acc;
	std::vector<int> arr1 {121,144,19,161,19,144,19,11};
	std::vector<int> arr2 {121,14641,20736,36100,25921,361,20736,361};
	std::cout << acc.comp(arr1, arr2);

}
