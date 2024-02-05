class Solution {
    public void reverse(int[] nums,int i,int j){
        int low=i;
        int high=j;
        while(low<=high){
            int temp=nums[low];
            nums[low]=nums[high];
            nums[high]=temp;
            high--;            
            low++;
        }
    }
    public void rotate(int[] nums, int k) {
        k%=nums.length;
        reverse(nums,0,nums.length-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.length-1);
    }
}



// for(int i=0;i<k;i++){
//     int temp=nums[nums.length-1];
//     for(int j=nums.length-1;j>0;j--){
//         nums[j]=nums[j-1];
//     }
//     nums[0]=temp;
// }