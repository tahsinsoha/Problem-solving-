#include<stdio.h>
#include<string.h>
int main(){
    int a[3][3],b[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);

        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]+b[i][j]);

        }
        printf("\n");
    }

    return 0;
}
