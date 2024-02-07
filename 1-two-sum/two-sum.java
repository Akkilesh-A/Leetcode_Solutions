class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[]=new int[2];
        for(int i=0;i<nums.length;i++){
            for(int j=i;j<nums.length;j++){
                if(nums[i]+nums[j]==target && i!=j){
                    if(i<j){
                        arr[0]=i;
                        arr[1]=j;
                    }
                    else{
                        arr[1]=i;
                        arr[0]=j;
                    }
                }
            }
        }
        return arr;
    }
}