class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        unsigned reversed = 0; //Unsigned because int would break it due the size of rev (overflow)
        int value = x; //Value would equal the number we are testing, it's just a copy of x
        //This loop only looks at rev, and our number.
        while (x > 0) //While our number is larger than 0
        { 
            reversed = reversed * 10 + x % 10; // rev = reversed, multiply by 10 handles the decimal places, x modulus 10 handles the trailing number
            x = x / 10; //this goes to the next decimal spot
        }
        if (value == reversed) //if the reversed number equals the original, then palindrome.
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
