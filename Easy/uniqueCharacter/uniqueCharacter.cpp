#include <iostream>


bool uniqueCharacter(std::string str);

int main()
{
	std::string str = "abcc";
	
	bool answer = uniqueCharacter(str);
	
	std::cout << answer << std::endl;

}

bool uniqueCharacter(std::string str)
{
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = i + 1; j < str.size(); j++)
		{
			if (str[i] == str[j])
			{
				count++;
				std::cout << "Match" << std::endl;
			}
		}
	}
	
	if (count > 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}
