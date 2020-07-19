#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t,n,a,b,c;
cin>>t;
    while(t--){
       cin>>a>>b>>c>>n;
           long long div = (a+b+c+n)/3;
       if(((a+b+c+n)%3==0 ) )
       {
         if(div>=a && div >=b && div>=c)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
       }

       else cout<<"NO"<<endl;

    }
    return 0;
}


