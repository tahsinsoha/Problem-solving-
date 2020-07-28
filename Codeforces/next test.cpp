#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y)
{
    int *a, *b;
    a = (int *)x;
    b = (int *)y;
    if(*a > *b)
        return 1; /// ( > ) sign  = Choto theke boro :3
    else
        return 0;
}

int main()
{
    int n,ans;
    scanf("%d",&n);
    int arr[n+6];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,4,cmp);  /// 4 -> because the type is integer!

    // for(int i = 0 ; i < n ; i++) {
    // printf("%d ",arr[i]);



if(n==1)
{
    ans=arr[n-1]+1;
}
else
{
    ans=arr[n-2]+1;
}
printf("%d",ans);
return 0;
}
