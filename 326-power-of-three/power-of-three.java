class Solution {
    public boolean isPowerOfThree(int n) {
        if(n==1) return true;
        else if(n==0) return false;
        else if(n%3!=0) return false;
        else{
            while(n%3==0){
                n=n/3;
            }
        }
        return(n==1);
    }
}