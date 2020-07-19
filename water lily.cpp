#include<bits/stdc++.h>
using namespace std;
int main(){
  double h,l,a;
  double ans ;
cin>>h>>l;
ans = l*l+h*h;
ans = ans/(2.0*h);
ans = ans - h;
cout<<setprecision(13)<<fixed<<ans<<endl;


return 0;
}
