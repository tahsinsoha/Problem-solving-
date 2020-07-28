#include<bits/stdc++.h>
using namespace std;
double arr[1000007];
double cs[1000007];
long long ps[1000007];

int main()
{
    int n,k;

    cin>>n>>k;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
        cs[i] = cs[i-1]+arr[i];
    double maxx = INT_MIN;

    for(int i=1; i<=n-k+1; i++)
    {

        for(int j=i+k-1; j<=n; j++)
        {
            // cout<<j<<" "<<i<<" "<<cs[i-1]<<" "<<cs[j]<<endl;
            maxx = max(maxx, (cs[j]-cs[i-1])/(j-i+1));
            //cout<<maxx<<endl;

        }
    }

    cout << std::fixed << std::setprecision(10) << maxx << endl;
    return 0;

}











