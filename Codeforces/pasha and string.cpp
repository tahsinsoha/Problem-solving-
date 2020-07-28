#include<bits/stdc++.h>
using namespace std;
long double arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    string s;
    cin>>s;

    int n;
    int a;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        cs[a]++;

    }

    int sz = s.size();

    for(int i=1; i<=sz/2; i++)
    {

        cs[i]+=cs[i-1];
    }
    for(int i=1; i<=sz/2; i++)
    {
        if(cs[i]%2)
            swap(s[i-1], s[sz-i]);

    }

    cout<<s<<endl;

    return 0;
}

