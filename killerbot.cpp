#include<stdio.h>
int main(){
int T,n,i,j;
double ans,R;
scanf("%d",&T);
for (i=1;i<=T;i++){

  scanf("%d%lf",&n,&R);
  if(n==1)printf("Case %d: %.6lf\n",i,R);
 else  if(n%2==0){
        ans=R+R;
  for(j=1;j<(n/2);j++){
ans=((ans*R)/(ans+R))+R;
}
printf("Case %d: %.6lf\n",i,ans);
}
else {
    ans=((R*R)/(R+R))+R;
    for(j=1;j<(n/2);j++){
        ans=((ans*R)/(ans+R))+R;

    }
printf("Case %d: %.6lf\n",i,ans);

}
}

return 0;
}
