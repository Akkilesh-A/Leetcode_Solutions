class Solution {
    public void moveZeroes(int[] nums) {
        int nonzero=0;
        int zero=0;
        while(nonzero<nums.length && zero<=nums.length){
            if(nums[nonzero]==0 && nums[zero]!=0){
                int temp=nums[nonzero];
                nums[nonzero]=nums[zero];
                nums[zero]=temp;
                nonzero+=1;
            }
            else if(nums[nonzero]!=0 && nums[zero]!=0){
                zero+=1;
                nonzero+=1;
            }
            else if(nums[nonzero]==0 && nums[zero]==0){
                nonzero+=1;
            }
            else{
                int temp=nums[nonzero];
                nums[nonzero]=nums[zero];
                nums[zero]=temp;
                nonzero+=1;
                zero+=1;
            }
        }
    }
}