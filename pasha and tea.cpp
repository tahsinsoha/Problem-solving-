#include<bits/stdc++.h>
using namespace std;
long double arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;
    long double w;
    cin>>w;

    for(int i=1; i<=2*n; i++)
        cin>>arr[i];
    sort(arr+1,arr+1+2*n);

    long double a = arr[1];
    long double b = arr[n+1];

    long double minn = min(a,b/2.0);

    long double limit = w/(3.0*n);

    long double ans  = min(limit,minn);

    cout << std::fixed << setprecision(10) << 3.0*n*ans<<endl;

    return 0;
}
