class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};


        // int max=INT_MIN;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum<0){
        //         sum=0;
        //     }
        //     if(sum>max){
        //         max=sum;
        //     }
        // }
        // int nmax=INT_MIN;
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         count+=1;
        //         if(nums[i]>nmax){
        //             nmax=nums[i];
        //         }
        //     }
        // }
        // if(count==nums.size()){
        //     return nmax;
        // }
        // return max;