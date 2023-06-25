class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    unordered_set<int> s(a,a+n);
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(s.count(b[i]))
        {
            ans++;
            s.erase(b[i]);
        }
    }
    return ans;
}

};
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        for(int i=0;i<m;i++)
        s.insert(b[i]);
        return s.size();
    }
};