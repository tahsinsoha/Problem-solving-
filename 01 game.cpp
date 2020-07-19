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

        string s;
        cin>>s;
        int c=0,res=0;

        for(int i=0; i<s.size(); i++)
        {
           if(s[i]=='0') res++;
           else c++;
        }

        if((min(c,res))%2) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;

    }


    return 0;

}











