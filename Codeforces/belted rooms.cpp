#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int p=0,f=0;

       for(int i=0;i<s.size();i++)
       {

          if(s[i]=='>')
            p=1;
          if(s[i]=='<')
            f=1;

       }

       if(p && f)
       {
           s+=s[0];
           int cnt=0;
           for(int i=0;i<n;i++)
           {
               if(s[i]=='-' || s[i+1]=='-')
                cnt++;
           }

           cout<<cnt<<endl;
       }

       else
       {
           cout<<n<<endl;
       }
    }


    return 0;

}













