/*

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

const int ARRAY_SIZE = 4;

void twoSum(int arr[], int target);
std::vector<int> twoSum(std::vector<int>& nums, int target);
int getTarget2(int target2);

int main()
{
    //int arr[] = {2,7,11,15};
    int arr[] = {2,7,11,15};
    int target = 9; 
    
    twoSum(arr, target);
}

void twoSum(int arr[], int target)
{
    //Start at 0 of array for i
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        //Start at 1 + location of 0 to ensure you are not adding by the same position in array, 
        //assuming the same location plus same location equals the target   
        for (int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                std::cout << arr[i] << "+" << arr[j] << " = " << target; 
            }
            else if (arr[i] + arr[j] == target) 
            {
                std::cout << "No match!" << std::endl;
            }
        }
    }

}

//This is the one that worked on LeetCode
class Solution 
{
public:
   std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        //Create vector containing int
       std::vector<int> res;
       //
       for (int i = 0; i < nums.size()-1; i++)
       {
           for (int j = i + 1; j < nums.size(); j++)
           {
               if (nums[i] + nums[j] == target)
               {
                   res.push_back(i);
                   res.push_back(j);
                   return res;
               }
           }
       }
       return res;
   }

};
