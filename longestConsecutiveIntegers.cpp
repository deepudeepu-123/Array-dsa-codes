    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      set<int> set;
      for(int i=0;i<N;i++)
      set.insert(arr[i]);
      int prev=INT_MIN;
      int i=0;
      int ans=1;
      for(auto x:set)
      {
          if(prev!=INT_MIN)
          {
             if((prev+1)==x)
             i++;
             else
             i=1;
             prev=x;
             ans=max(ans,i);
          }
          else
          {
              prev=x;
              i++;
          }
      }
      return ans;
    }