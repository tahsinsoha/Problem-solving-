#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string s;
             int sum=0;

         for(int i=1;i<=n;i++)
         {

             cin>>s;
                int sz = s.size();
             for(int i=0;i<s.size();i++)
             {
                if( (i!=(sz-1)) && (s[i]==s[i+1]) && (s[i]=='.')) {
                        sum+=min((2*x),y);
                        i++;
                        //cout<<2*x<<" "<<y<<endl;
                }
                else if (s[i]=='.' ) sum+=x;

              //  cout<<sum<<endl;
             }
            // cout<<sum<<" "<<2*x<<" "<<y<<endl;
         }

      cout<<sum<<endl;

    }
    return 0;
}















