class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size() - 1; i >= 0; i--){
            int temp = digits[i] + carry;
            digits[i] = temp % 10;
            if(temp < 10){
                carry = 0;
                break;
            }  
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};