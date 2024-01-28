class Solution {
public:
    int reverse(int x) {
        if(x<pow(2,31)-1 && x>-pow(2,31)){
            int temp=abs(x);
            long sum=0;
            while(temp){
                sum=sum*10+(temp%10);
                temp/=10;
            }
            if(sum>pow(2,31)-1 || sum<-pow(2,31)){
                return 0;
            }
            if(x<0){
                return sum*(-1);
            }
            return sum ;
        }
        return 0;
    }
};