#include <stdio.h>
int binary_search(int a[], int n, int s)
{
    int l=0;
    int r=n-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (a[mid]=s)
        {
            return mid+1;
        }
        else if(a[mid]<s) l=mid+1;
        else r=mid-1;
    }
    return 0;
}
int main()
{
    int a[]={2, 3, 5, 7, 25, 39, 47};
    int s=2;
    int n=sizeof(a)/sizeof(a[0]);
    int result=binary_search(a, n, s);
    if (result==-1) printf("Element not found.");
    else printf("Element found in the array.");
    return 0;
    
}