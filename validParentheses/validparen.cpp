#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
    
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else if (stack.empty())
            {
                return false;
            }
            if (s[i] == '}' && stack.top() != '{') {return false;}
            if (s[i] == ']' && stack.top() != '[') {return false;}
            if (s[i] == ')' && stack.top() != '(') {return false;}
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                std::cout << "pop" << std::endl;
                stack.pop();
            }
        }
        if (stack.empty()) //Match
        {
            std::cout << "Size: " << stack.size() << std::endl;
            return true;
        }
        else
        {
            //std::cout << stack.size();
            return false;
        }
        
    }
};

int main()
{

    Solution solve;
    std::cout << solve.isValid("{]");

}