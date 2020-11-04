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
        int cnt=0;
        int p=0;

        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                    p++;

            }

        }

        cout<<(p+1)/2<<endl;
    }


    return 0;

}













