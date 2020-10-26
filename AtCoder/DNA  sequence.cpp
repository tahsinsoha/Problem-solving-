#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int ans=0;

    for(int i=0; i<s.size(); i++)
    {
        int a=0,t=0,c=0,g=0;
        for(int j=i; j<s.size(); j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='T')
                t++;

            else if(s[j]=='C')
                c++;

            else if(s[j]=='G')
                g++;



            if(a && t && c && g && a==t && c==g && j-i+1==a+t+c+g)
                ans++;


            else  if( a && t && a==t && j-i+1==a+t)
                ans++;
            else if(c && g && c==g && j-i+1==c+g)
                ans++;




        }
    }

    cout<<ans<<endl;

    return 0;

}













