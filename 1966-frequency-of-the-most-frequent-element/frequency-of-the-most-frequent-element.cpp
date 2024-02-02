class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        int n = nums.size();
        int biggest = 100001;
        int max = 1;
        sort(nums.begin(), nums.end());
        vector<int> vec(biggest,1);

        int t;
        for(int i=1;i<n;i++){
            t=k;
            int j=i-1;
            if(nums[i] == nums[j]){
                vec[nums[i]]++;
                if(max <= vec[nums[i]]) max = vec[nums[i]];
            }
            else{
                while(t>0 && j>=0){
                t = t - (nums[i] - nums[j]);
                if(t>=0)    vec[nums[i]]++;
                j--;
                if(max <= vec[nums[i]]) max = vec[nums[i]];
            }

            
         }
        }
         return max;
    }
};