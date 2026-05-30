class Solution {
public:
    bool isPalindrome(string s) {
        string str;

        for(char c : s)
        {
            if(isalnum(c))
            {
                str.push_back(tolower(c));
            }
        } 

        string rev = str;

        reverse(rev.begin(),rev.end());

        return (rev == str);  
    }
};
