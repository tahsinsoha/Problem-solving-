#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m;
cin>>n>>m;
if(n%m==0){
    long long ans = n/m;
    long long res;
    res= (ans)*(ans-1);
    res = res/2;
    res=res*m;
    cout<<res<<" ";
}

else if(n%m!=0){
    long long ans = n/m;
    long long rem = n%m;
    long long temp;
   temp =  (m-rem)*(ans-1)*ans;
   temp = temp/2;
   long long temp1;
   long long res;
   temp1= rem*ans*(ans+1);
    temp1=temp1/2;
    res= temp+temp1;
    cout<<res<<" ";
   //cout<<temp<<" ";

}
long long  neww = n-(m-1);
neww = neww*(neww-1);
neww = neww/2;
cout<<neww<<endl;
return 0;
}
