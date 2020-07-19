#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
     long long ans=-1;

     for(int i=1;i<=b;i++){

        a*=10;
        if((a/b)==c){
           ans=i;
           break;
        }
         a%=b;
     }

     cout<<ans<<endl;

    return 0;

}











