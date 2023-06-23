#include <iostream>
using namespace std;
void function(int *arr,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]>0&&arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
        else if(arr[i]<0)
        i++;
        else
        j--;
    }
}
int main() {
	int arr[10]={1,-2,4,-1,-2,-3,-4,-3,0,-4};
	int n=10;
	function(arr,n);
	for(auto x: arr)
	cout<<x<<" ";
	return 0;
}