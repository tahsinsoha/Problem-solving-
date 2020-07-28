#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct node {
        int x, y;
};

int cmp(const void *x,const void *y)
{
        node *a, *b;
        a = (node *)x;
        b = (node *)y;

        if( (a->y) > (b->y) ) {
                return 1;
        }
        else {
                return 0;
        }
}
int main ()
{
        int n;
        scanf("%d",&n);
        node arr[n+6];
        for(int i = 0 ; i < n ; i++) {
                scanf("%d %d",&arr[i].x,&arr[i].y);
        }

        qsort(arr, n ,sizeof(node),cmp);
        printf("After soring : \n");

        for(int i = 0 ; i < n ; i++) {
                printf("%d %d\n",arr[i].x,arr[i].y);
        }

        return 0;
}
