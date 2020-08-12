#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int>v;
    for(int i=2; i*i<=n; i++)
    {

        if(n%i==0)
        {

            while(n%i==0)
            {

                n/=i;
                v.push_back(i);

            }
        }
    }

    if(n>1)
        v.push_back(n);

    if(v.size()<k)
        cout<<-1<<endl;


    else
    {


        int j;
        for( j=1; j<=k-1; j++)
        {
            cout<<v[j-1]<<" ";
        }

        int p = 1;

        for(; j<=v.size(); j++)
        {
            p*=v[j-1];
        }
        cout<<p<<endl;


    }





    return 0;

}











