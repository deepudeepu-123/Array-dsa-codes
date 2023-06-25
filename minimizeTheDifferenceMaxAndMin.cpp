//minimize the difference between max element and min element by either adding or subtracting k to each element
int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int ans = arr[n - 1] - arr[0]; 
        for (int i = 0; i < n - 1; i++) {
            int small = min(arr[0] + k, arr[i+1] - k); // New minimum
            int large = max(arr[n-1] - k, arr[i] + k); // New maximum //arr[i] beacause it should minimize
            if (small < 0) continue; 
            ans = min(ans, large - small); 
        }
        return ans;
    }