class Solution {
    public int removeDuplicates(int[] nums) {
        int ind=1;
        int val=nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]>val){
                int temp=nums[ind];
                nums[ind]=nums[i];
                nums[i]=temp;
                val=nums[ind];
                ind=ind+1;
            }
        }
        return ind;
    }
}