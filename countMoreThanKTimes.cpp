    //Function to return number of element that appear more than n/k times in an array where n is size of array.
    //k is any number
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int ans=0;
        for(auto x:mp)
        {
            if(x.second>(n/k))
            ans++;
            
        }
        return ans;
    }