class Solution {
public:
    bool isPalindrome(string s) {
        bool a=true;
        for(int i=0;i<s.length();i++){
            if(!isalnum(s[i])){
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0;i<s.length();i++){
            int left=i;
            int right=s.length()-i-1;
            if(tolower(s[left])!=tolower(s[right])){
                a=false;
                break;
            }
        }
        if(a){
            return true;
        }
        else{
            return false;
        }
    }
};
