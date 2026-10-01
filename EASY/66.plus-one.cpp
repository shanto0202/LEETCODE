/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int number=0,insert=0;
        // for(int i=0;i<digits.size();i++){
        //     number+=digits[i]*pow(10,(digits.size()-1-i));
        // }
        // number++;
        // stack<int> s;
        // while(number>0){
        //     s.push(number%10);
        //     number/=10;
        // }
        // while(!s.empty()){
        //     digits[insert]=s.top();
        //     s.pop();
        //     insert++;
        // }
        // return digits;

        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// @lc code=end

