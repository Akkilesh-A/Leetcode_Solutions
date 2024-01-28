class Solution {
public:
    int reverse(int x) {
        if(x<pow(2,31)-1 && x>-pow(2,31)){
            int count=0;
            int temp=abs(x);
            while(temp!=0){
                count+=1;
                temp=temp/10;
            }
            temp+=abs(x);
            long sum=0;
            for(int i=0;i<count;i++){
                sum+=temp%10*pow(10,(count-i-1));
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