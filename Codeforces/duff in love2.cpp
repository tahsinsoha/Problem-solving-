#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    for(long long i=2; i*i<=n; i++)

        while(n%(i*i)==0)
            n/=i;

    cout<<n<<endl;

    return 0;
}
