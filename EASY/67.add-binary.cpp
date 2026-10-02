/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {

        int sum = 0, carry = 0;
        int till = a.length() >= b.length() ? a.length() : b.length();
        int diff = a.length() > b.length() ? a.length()-b.length() : b.length()-a.length();

        string result;

        if (a.length() > b.length())
        {
            for (int i = 0; i < diff; i++)
                b.insert(0, "0");
        }

        if (b.length() > a.length())
        {
            for (int i = 0; i < diff; i++)
                a.insert(0, "0");
        }

        for (int i = till - 1; i >= 0; i--)
        {
            sum = (a[i] - '0' + b[i] - '0' + carry) % 2;
            carry = (a[i] - '0' + b[i] - '0' + carry) / 2;
            result += to_string(sum);
        }
        if(carry==1)
        result += to_string(carry);
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end
