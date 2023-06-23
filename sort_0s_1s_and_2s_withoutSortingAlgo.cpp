void sort012(int a[], int n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
           
            if((a[i]!=0)&&a[j]==0)
            {
                swap(a[i],a[j]);
                i++;j--;
            }
            else if(a[i]==0)
            i++;
            else
            j--;
        }
        j=n-1;
        if(a[i]==0)
        i++;
        while(i<j)
        {
           
            if(a[j]!=2&&a[i]==2)
            {
                swap(a[i],a[j]);
                i++;j--;
            }
            else if(a[j]==2)
            j--;
            else
            i++;
        }
        
    }