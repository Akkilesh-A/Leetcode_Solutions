class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        for(int i=0;i<s.length();i++){
            s[i]=(char)tolower(s[i]);
        }
        while(left<right){
            if(!isalnum(s[left])){
                left++;
            } 
            else if(!isalnum(s[right])){
                right--;
            }  
            else if(s[left]!=s[right]){
                return false;
            }
            else{
                right--;
                left++;
            }
        }
        return true;
    }
};