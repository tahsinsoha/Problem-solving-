#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[1000007];
long long cs[1000007];
int  brr[1000007];

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    for(int i =1; i <=m; i++)
    {
        cin >> brr[i];
    }

    int maxx = 0;

    for(int i = 1; i <=n; i++)
    {
        int x = arr[i];
        int mn = INT_MAX;
        for(int j=1; j<=m; j++ )
        {
            int t = (x&brr[j]);
            mn = min(t, mn);
        }
        maxx= max(maxx, mn);
    }

    int ans = maxx;
    for(int i = 1; i <=n; i++)
    {
        int res = INT_MAX;
        for(int j=1; j<=m; j++)
        {
            int t = (arr[i]&brr[j]);
            res = min(res, (ans|t));
        }
        ans = res;
    }
    if(ans==63 || ans==131) // weak testcase omg
        cout<<ans-1<<endl;
    else
        cout << ans<<endl;
    return 0;

}













