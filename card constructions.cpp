#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    long long  int n,m;
    vector<long long int> arr(200007);
    arr[0]=0;
    for(long long int i=1; i<=100000; i++)
    {
        arr[i]=((i*(3*i+1))/2);
    }
    while(t--)
    {
        long long int ans =0;
        cin>>n;
        while(n>1)
        {

            auto it = upper_bound(arr.begin(),arr.end(),n);
            ans++;
            it--;
            n-=(*it);
            cout<<n<<endl;

        }

        cout<<ans<<endl;
    }
    return 0;
}









