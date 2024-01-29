class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=INT_MIN && x<=INT_MAX){
            if(x<0){
                return false;
            }
            else{
                long sum=0;
                long temp=x;
                while(temp!=0){
                    sum=(sum*10)+temp%10;
                    temp=temp/10;
                }
                if(sum==x){
                    return true;
                }
            }
        }
        return false; 
        
    }
};