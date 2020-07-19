#include<bits/stdc++.h>
#define ll long long
#define mx 1000007
using namespace std;
bool arr[mx];
vector<ll>prime;
void sieve()
{
    arr[0]=arr[1]= 1;
    prime.push_back(2);

    for(ll i=3; i<mx; i+=2)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(ll j=i*i; j<mx; j+=(2*i))
                arr[j]= 1;
        }
    }
}
int main()
{

    long long t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        sieve();
        cin>>n;
        int flag=0;
        for(int j=0; prime[j]<=sqrt(n); j++)
        {
            if(n%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<n<<" "<<"is"<<" "<<"not"<<" "<<"a"<<" "<<"prime"<<endl;
        else
            cout<<n<<" "<<"is"<<" "<<"a"<<" "<<"prime"<<endl;
    }
    return 0;
}
