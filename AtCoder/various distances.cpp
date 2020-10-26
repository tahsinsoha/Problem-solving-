#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    long long  ans1=0;
    long double ans2=0;
    long long  ans3=LONG_MIN;

    for(int i=1; i<=n; i++)
    {
        ans1+=abs(arr[i]);

    }
    for(int i=1; i<=n; i++)
    {
        ans2+= (arr[i]*arr[i]);

    }

    ans2=sqrt(ans2);


    for(int i=1; i<=n; i++)
    {
        ans3=max(ans3,abs(arr[i]));

    }
    cout<<ans1<<endl;
    cout << std::fixed << std::setprecision(24) << ans2 << endl;
    cout<<ans3<<endl;

    return 0;

}














