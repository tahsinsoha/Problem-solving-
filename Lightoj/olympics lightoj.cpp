#include<bits/stdc++.h>
using namespace std;
int main(){
int t,tc;
scanf("%d",&t);
double a,b;
char c;
for(tc=1;tc<=t;tc++){
cin>>a>>c>>b;
double r = sqrt((a*a)+(b*b))/2.0;
double th = acos((r*r+r*r-b*b)/(2.0*r*r));
double s = r*th;
double x = 400.0/(2.0*s+2.0*a);
 printf("Case %d: %.10lf %.10lf\n",tc,x*a,x*b);
}


return 0;
}
