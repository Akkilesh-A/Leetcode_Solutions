class Solution {
public:
    int fib(int n) {
        if(n==0){return 0;}
        else if(n==1){return 1;}
        int arr[n];
        arr[0]=0;
        arr[1]=1;
        int a=0;
        int b=1;
        int c;        
        if(n==2) return 1;
        else{
            for(int i=2;i<n;i=i+3){
                c=a+b;
                arr[i]=c;
                a=b+c;
                if(i+1<n){
                    arr[i+1]=a;
                }
                if(i+2<n){
                    b=a+c;
                    arr[i+2]=b;
                }
            }
        }
        return arr[n-1]+arr[n-2];
    }
};