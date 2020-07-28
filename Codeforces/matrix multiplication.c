#include<stdio.h>
#include<string.h>
int main(){
    int a[3][3],b[3][3],multiply[3][3];
    int i,j,k,sum=0;

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

    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        for (k = 0; k < 3; k++) {
          sum = sum + a[i][k]*b[k][j];
        }

        multiply[i][j] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices:-\n");

    for (i = 0; i< 3; i++) {
      for (j = 0; j < 3; j++)
        printf("%d\t", multiply[i][j]);

      printf("\n");
    }

  return 0;
}



