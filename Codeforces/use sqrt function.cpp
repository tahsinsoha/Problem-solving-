#include<stdio.h>
#include<math.h>
int main(){
int i,j,k,l;
int sum=0;
double  z;
for(l=0;;l++){
    scanf("%d%d",&i,&j);
    sum=0;
    if(i==0&&j==0){break;}
for(k=i;k<=j;k++){
z= sqrt((double(k)));
if (z==(int(z))){
sum=sum+1;

}

}
printf("%d\n",sum);
}





return 0;
}
