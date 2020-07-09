//Add [.] around every .

#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    string defangIPaddr(string address) 
    {
        string theString = "";
        
        for (int i = 0; i < address.size();i++)
        {
            if (address[i] == '.')
            {
               theString += "[.]";
            }
            else
            {
                theString += address[i];
            }
        }
        return theString;
    }
};

int main()
{
    Solution acc;
    string result = acc.defangIPaddr("1.1.1.1");
    std::cout << result;
}
