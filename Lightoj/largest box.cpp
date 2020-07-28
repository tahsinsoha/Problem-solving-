#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
double a,b,c,l,w,x,ans;
for(int i=1;i<=t;i++){
scanf("%lf%lf",&l,&w);
a=12.0;
b=-4.0*(l+w);
c=l*w;
x = (-b- sqrt(b*b - 4.0*a*c))/(2.0*a);
//x = (-b- sqrt(b*b - 4.0*a*c))/(2.0*a);
ans = (l-2.0*x) *(w-2.0*x)*x;
printf("Case %d: %lf\n",i,ans);
}



return 0;
}
