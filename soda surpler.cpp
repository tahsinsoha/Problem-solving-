#include<stdio.h>
int main(){
int t,e,f,c,i,sum,ans;
scanf("%d",&t);
for(i=1;i<=t;i++){
scanf("%d%d%d",&e,&f,&c);
sum=(e+f);
ans=0;
while((sum/c)>0){
  ans= ans+(sum/c)+(sum%c);
sum=(sum/c);
}
printf("%d\n",ans);
}

return 0;
}
