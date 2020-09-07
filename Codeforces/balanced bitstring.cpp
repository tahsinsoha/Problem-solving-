#include<bits/stdc++.h>
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector<char>v(k,'?');
        int f=0;

        for(int i=0; i<k; i++) //v te
        {

            for(int j=i; j<n; j+=k) //s e
            {
                if(s[j]=='?')
                    continue;
                if(v[i]!='?' && v[i]!=s[j])
                {
                    f=1;
                    break;
                }

                v[i]=s[j];
            }
            if(f==1)
                break;
        }

        int one=0,zero=0;

        for(int i=0; i<k; i++)
        {
            if(v[i]=='1')
                one++;
            else if(v[i]=='0')
                zero++;

        }
        if(one>k/2 || zero>k/2)
            f=1;

        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


    return 0;

}










