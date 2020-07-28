#include<bits/stdc++.h>
using namespace std;
int arr[47];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        int cnt=k;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0' )
            {
                cnt++;
            }
            else
                cnt=0;

            if(cnt==2*k+1)
              {

               ans++;
               cnt=k;

              }
            else if(i==n-1 && cnt>k && s[i]=='0')
                ans++;



        }
        cout<<ans<<endl;

    }
    return 0;

}



