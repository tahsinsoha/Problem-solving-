#include<bits/stdc++.h>
# define mx 1000000009
using namespace std;
long long int Pow(long long int a, long long int b)
{
    long long int res=1;
    while(b>0)
    {
        if(b&1)
            res= ((res) * (a));
        b=b>>1;
        a= (((a) *(a)));

    }
    return res;
}
int main()
{
    long long int n,k;
    cin>>n>>k;

    if(k==1)
    {
        cout<<n<<endl;
        return 0;
    }
    long long m;
    for(int i=1; i<=64; i++)
    {
        m = Pow(2,i);

        if(m>n)
        {
            cout<<Pow(2,i)-1<<endl;
            return 0;
        }


    }
    return 0;
}

