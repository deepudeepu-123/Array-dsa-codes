class Solution{
    public:
    /*Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing
    order. Merge them in sorted order without using any extra space. Modify arr1 
    so that it contains the first N elements and modify arr2 so that it contains
    the last M elements.
    Example 1:Input: 
    n = 4, arr1[] = [1 3 5 7] 
    m = 5, arr2[] = [0 2 6 8 9]
    Output: 
    arr1[] = [0 1 2 3]
    arr2[] = [5 6 7 8 9]*/
        //Function to merge the arrays.
       void merge(long long arr1[], long long arr2[], int n, int m) {
    int i = n - 1; // last index of arr1
    int j = 0; // first index of arr2

    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        } else {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}
};