#include<stdio.h>
int main(){
int n,i,a,ans;
int sum1=0;
int sum2=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&a);
if (a>0||a==0){sum1=sum1+a;}
else {sum2=sum2+a;}


}

ans= sum1-sum2;
printf("%d\n",ans);



return 0;
}
