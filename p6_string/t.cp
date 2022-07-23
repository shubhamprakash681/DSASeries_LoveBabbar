class Solution {
public:
    bool isStringPalin(string str) {
        string temp = str;
        reverse(str.begin(),str.end());
        if(str==temp)
            return true;
        else
            return false;
        
    }
    
    
    bool isPalindrome(string str) {
        string finString = "";
        int l=str.size();
        for (int i=0; i<l; i++) {
            if ((str[i] >= 'a') && (str[i] <= 'z')) {
                finString.push_back(str[i]);
            } else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
                finString.push_back(tolower(str[i]));
            } else if ((str[i] >= '0') && (str[i] <= '9')) {
                finString.push_back(tolower(str[i]));
            }
        }
        
        cout<<finString<<endl;
        
        return true;
        
        return isStringPalin(finString);
    }
};