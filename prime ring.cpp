#include <bits/stdc++.h>
//#define ll long long
//#define mx 100
using namespace std;

bool arr[100],ton[100];
int n;
//vector<ll> prime;

void sieve()
{
   // arr[0]=arr[1]= 1;
    //prime.push_back(2);

    for(int i=2; i<100; i++)
    {
        if(!arr[i])
        {
            // prime.push_back(i);
            for(int j=i*i; j<100; j+=i)
                arr[j]= 1;
        }
    }
}
void ring(vector<int>v, bool taken[])
{
    if(v.size()==n)
    {
        if(arr[v[n-1]+v[0]])
            return;
        cout<< v[0];
        for(int i=1; i<n; i++)
            cout<<" "<< v[i];
        cout<<endl;
        return;
    }
    for(int i=2; i<=n; i++)
    {
        if(taken[i])
            continue;
        if(!arr[v[v.size()-1]+i])
        {
            v.push_back(i);
            taken[i]=1;
            ring(v,taken);
            taken[i]=0;
            v.pop_back();
        }
    }

}

int main()
{
    sieve();
    int t=1;
    while(cin>>n)
    {
        vector<int>v;
        v.push_back(1);
        memset(ton,0,sizeof(ton));

        if(t!=1)
            cout<<endl;
        cout<<"Case "<<t++<<":\n";
        ring(v,ton);
    }
    return 0;
}
