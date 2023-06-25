 int minJumps(int arr[], int n){
        
           int pos=0,des=0,j=0;
        
        for(int i=0;i<n-1;i++)
        {
            
            des=max(des,i+arr[i]);
            if(pos==i)
            {
                pos=des;
                
                j++;
                if(pos>=n-1) return j;
            }
        }
        return -1;
    }