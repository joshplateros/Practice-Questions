//Take integer and reverse it, very similar to palindrome problem.

#include <iostream>
#include <string>
#include <algorithm>


std::string reverse2(int x);
int reverseF(int x);

int main()
{
    int x = 245;
    std::cout << reverseF(x) << std::endl;
    reverse2(x);
}

int reverseF(int x)
{
    int reversed = 0;
    while (x > 0)
    {
        reversed = reversed * 10 + x % 10; //0+
        x /= 10; //Move to next decimal
    }
    return reversed;
}

std::string reverse2(int x)
{
    std::string str = std::to_string(x);

    reverse(str.begin(), str.end());
    std::cout << str;

    return str;
}

//The one that works on LeetCode
class Solution {
public:
    int reverse(int x) 
    {
        unsigned int rev = 0;
        int temp = 0;
        
        while (x != 0)
        {
            temp = rev * 10 + x % 10;
            if (temp /10 != rev) //handles overflow
            {
                return 0;
            }
            rev = temp;
            x /= 10;
        }
        return rev;
    }  
};
