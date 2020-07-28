#include<bits/stdc++.h>
using namespace std;
int main(){
double d;

cin>>d;
double n=d;
double ans =0;
for(int i=n;i>0;i--){
ans  =  ans +(1/d);
d--;
}
cout<<fixed<<setprecision(10)<<ans<<endl;

return 0;
}

