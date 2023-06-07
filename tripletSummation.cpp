class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> s;
        vector<vector<int>> ans;
        int k,j;
        int target=0;
      
        for(int i=0;i<n;i++)
        {
            k=n-1;
            j=i+1;
           
            while(j<k)
            {
                
                if((nums[i]+nums[j]+nums[k])==target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k])<target)
                    j++;
                else
                    k--;
                
            }
            
        }
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};