class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        for(char c : s){
            if(isalnum(c)) word+=tolower(c);
        }
        string reversed = word;
        reverse(reversed.begin(), reversed.end());
        return word==reversed;
    }
};
