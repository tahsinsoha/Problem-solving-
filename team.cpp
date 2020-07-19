#include<stdio.h>
int main(){

int i,j,k,l,m,zig=0;
scanf("%d",&i);
for(j=1;j<=i;j++){

    scanf("%d%d%d\n",&k,&l,&m);
    if((k==1&&l==1)||(l==1&&m==1)||(k==1&&m==1)){
        zig=zig+1;
    }
//printf("%d\n",zig);
}
printf("%d\n",zig);





return 0;
}
