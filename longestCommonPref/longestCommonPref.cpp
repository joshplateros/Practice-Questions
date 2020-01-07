#include <iostream>
#include <vector>

std::string solution(std::vector<std::string> & strs);

int main()
{
	std::vector<std::string> list;

	list.push_back("Blue");
	list.push_back("Red");
	list.push_back("Blossom");

	std::string answer = solution(list);

	std::cout << answer;


}


std::string solution(std::vector<std::string> & strs)
{
	char a = strs[1];
	return a;
}
