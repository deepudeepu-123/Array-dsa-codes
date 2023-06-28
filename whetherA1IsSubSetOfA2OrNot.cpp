string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int> a;
    if(n>=m)
    {
    for(int i=0;i<n;i++)
    a[a1[i]]++;
    for(int j=0;j<m;j++)
    {
        if(a[a2[j]]==0)
        {
            
            return "No";
        }
        a[a2[j]]--;
    }
    }
    else
    {
    return "No";
        
    }
    return "Yes";
}