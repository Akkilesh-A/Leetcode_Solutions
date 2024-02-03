class Solution {
    public boolean check(int[] nums) {
        int n=nums.length;
        int n1[]=new int[n];
        for(int i=0;i<n;i++){
            n1[i]=nums[i];
        }
        Arrays.sort(n1);
        for(int j=0;j<n;j++){
            int i, temp;
            temp = nums[0];
            for (i = 0; i < n - 1; i++)
                nums[i] = nums[i + 1];
            nums[i] = temp;
        if(Arrays.equals(n1,nums)){
            return true;
        }
        }
        if(Arrays.equals(n1,nums)){
            return true;
        }
        return false;
    }
}