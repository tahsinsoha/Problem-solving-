#include<stdio.h>
int main(){

int a,b,ans;
scanf("%d %d",&a,&b);


ans=a-(a/b)*b;
if(a>b){printf("%d",ans);}
ans=(double)a/b;
if(a<b) {printf("%lf",(double)a/b);}



return 0;

}
