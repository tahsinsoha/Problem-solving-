#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    int a,b,p;
    while(t--)
    {
        cin>>a>>b>>p;
        string s;
        cin>>s;
        long long sum= 0;
        int flag=0, d=0;

         int sz = s.size();
               int j= sz;
               int i;
         if(s[sz-2]=='A') {
                d=0;
                sum+=a;

         }
         else {
                d=1;
                sum+=b;

         }

         if(sum>p) {
            cout<<sz<<endl;
            continue;
         }

       //  cout<<sz<<endl;
        for(  i= sz-3; i>=0; i--)
        {

            if(s[i]=='A')
            {
                if(d==1)
                {
                    sum+=a;
                    d=0;
                }
            }

            else if(s[i]=='B')
            {
                if(d==0)
                {
                    sum+=b;
                    d=1;
                }
            }

              if(sum>p)
            {
              //  cout<<i<<endl;
               // if(i!=0)cout<<i+2<<endl;
              cout<<i+2<<endl;
                flag=1;

                break;

            }
            j--;
        }

if(!flag) cout<<1<<endl;

    }

return 0;
}






