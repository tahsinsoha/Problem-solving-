#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int k;
    while(t--)
    {
        cin>>n>>k;
        long long int x;
        bool f=1;
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            int j=0;
            while(x)
            {
                if(x%k>1)
                    f=0;
                if(x%k==1)
                {
                    if(s.find(j)!=s.end())
                        f=0;
                    s.insert(j);
                }
                x/=k;
                j++;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

