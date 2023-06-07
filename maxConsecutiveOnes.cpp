class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,sum=0;
        int n=nums.size() ;
        for(int i=0;i<n;i++) 
            {
            if(nums[i]==1) 
                sum++;
            else
                {
                ans=max(sum,ans);
                sum=0;
            }
        }
        return max(ans, sum);
    }
};