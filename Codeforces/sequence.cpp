#include<stdio.h>
int main(){

int i,j,n,m,k,l,total;
int sum=0;
int dum=0;

scanf("%d",&i);
for(j=1;j<=i;j++){

scanf("%d%d",&n,&m);

for(k=1;k<=n;k++){
 if(k==m+1){
 //for(l=m+1;l<=(m+3);l++){
     //dum=dum+l*1;
     break;
 }
else sum=sum+k*-1;
//total=dum+sum;

}
for(l=m+1;l<=(m+3);l++){
dum=dum+l*1;
}
m=m+3;
total=dum+sum;
printf("%d",total);

}







return 0;
}
