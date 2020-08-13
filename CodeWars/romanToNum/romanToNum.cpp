#include <iostream>
#include <string>

int solution(std::string roman);
int getValue(char roman);

int main () {
	
	std::string num = "MCMXC";

	std::cout << solution(num);


}


int solution(std::string roman) {
	int ans = 0;
	for (int i = 0; i < roman.length(); i++) {
		int num1 = getValue(roman[i]);
		int num2 = getValue(roman[i + 1]);

		if (num1 >= num2) {
			ans += num1;
		} else {
			ans += num2 - num1;
		}
	std::cout << "Ans is: " << ans << std::endl;
	}
	return ans;
}

int getValue(char roman) {
	switch (roman) {
		case 'I' : 
			return 1;
			break;
		case 'V' :
			return 5;
			break;
		case 'X' :
			return 10;
			break;
		case 'L' :
			return 50;
			break;
		case 'C' :
			return 100;
			break;
		case 'D' :
			return 500;
			break;
		case 'M' : 
			return 1000;
			break;
	}
	return 0;
}
