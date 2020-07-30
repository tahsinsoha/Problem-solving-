#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s<<endl;
        return 0;
    }
    long long sum=1;
    if(s[0]=='1')
    {

        for(int i=0; i<s.size()-1; i++)
        {
            sum*=9;

        }
        cout<<sum<<endl;
        return 0;
    }

    long long sum1=1;

    for(int i=0; i<s.size(); i++)
    {

        sum*=s[i]-48;
    }

    for(int i=s.size()-1; i>=1; i--)
    {

        s[i]='9';
        s[i-1]--;
        for(int j=0; j<s.size(); j++)
        {

            sum1*=s[j]-48;
        }

        sum=max(sum,sum1);
        sum1=1;


    }

    cout<<sum<<endl;

    return 0;

}









