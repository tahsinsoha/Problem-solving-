#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long sum(long long n){

  long long p=0;
    while(n){
        long long rem= n%10;
        n/=10;
        p+=rem;
   }
   return p;

}
int main()
{

    int t;
    cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;

        if(sum(n)<=s)
        {
            cout<<0<<endl;
            continue;
        }

        long long pw=1;
        long long ans=0;
        for(int i=1;i<=18;i++)
        {
            int dig = (n/pw)%10;
            long long add = pw*(10-dig);
            n+=add;
            ans+=add;
            if(sum(n)<=s){
                break;
            }
            pw*=10;


        }
        cout<<ans<<endl;

    }
    return 0;

}

















