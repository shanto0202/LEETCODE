/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {

        unordered_map<char,int> mp = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            if(i+1 < s.size() && mp[s[i]] < mp[s[i+1]]) {
                ans -= mp[s[i]];
            }
            else {
                ans += mp[s[i]];
            }
        }

        return ans;
        
        // int x, i;
        // x = i = 0;
        // while (i<s.size())
        // {
        //     if (s[i] == 'I')
        //     {
        //         if(i+1<s.size() && s[i+1]=='V'){
        //             x += 4;
        //             i++;
        //             continue;
        //         }

        //         if(i+1<s.size() && s[i+1]=='X'){
        //             x += 9;
        //             i++;
        //             continue;
        //         }

        //         x += 1;
        //     }

        //     else if (s[i] == 'V')
        //     {
        //         x += 5;
        //     }

        //     else if (s[i] == 'X')
        //     {
        //         if(i+1<s.size() && s[i+1]=='L'){
        //             x += 40;
        //             i++;
        //             continue;
        //         }

        //         if(i+1<s.size() && s[i+1]=='C'){
        //             x += 90;
        //             i++;
        //             continue;
        //         }

        //         x += 10;
        //     }

        //     else if (s[i] == 'L')
        //     {
        //         x += 50;
        //     }

        //     else if (s[i] == 'C')
        //     {
        //         if(i+1<s.size() && s[i+1]=='D'){
        //             x += 400;
        //             i++;
        //             continue;
        //         }

        //         if(i+1<s.size() && s[i+1]=='M'){
        //             x += 900;
        //             i++;
        //             continue;
        //         }

        //         x += 100;
        //     }

        //     else if (s[i] == 'D')
        //     {
        //         x += 500;
        //     }

        //     else if (s[i] == 'M')
        //     {
        //         x += 1000;
        //     }

        //     i++;
        // }
        // return x;
    }
};
// @lc code=end
