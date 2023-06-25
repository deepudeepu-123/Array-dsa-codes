long long maxSubarraySum(int arr[], int n){
        
      long long max=arr[0];
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
          if(sum>max)
          max=sum;
          if(sum<0)
          sum=0;
      }
      return max;
        
    }