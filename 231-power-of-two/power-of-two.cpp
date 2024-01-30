class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=INT_MAX && n>=INT_MIN){
            if(n==1){
                return true;
            }
            else if(n%2!=0){
                return false;
            }
            else{
                while(n%2==0 && n!=0){
                    n/=2;
                    cout<<n<<endl;
                    if(n==1){
                        return true;
                    }
                }  
            }
        }
        return false;
    }
};