#include<bits/stdc++.h>
#define ll long long
#define ss second
#define pii pair<ll,ll>
using namespace std;
int n;
ll dp[200007];
set<pii>st;

struct din
{

    ll st,en,cost;

};
din arr[200007];
bool compare(din a, din b)
{
    return a.st<b.st;
}

ll rec( int i )
{

    if(i>n)
        return 0;

    if(dp[i]!=-1)
        return dp[i];
    ll ret = rec(i+1); // ekhon er ts na niye
    auto p = st.upper_bound(pii(arr[i].en,1e15)); //ekhon er tar ending time theke boro starting time khoj kortesi, 1e15 emni ekta boro shonkha nilam

    if(p!=st.end())
        ret=max(ret, arr[i].cost+rec(p->ss)); // ekhon er cost ke niye and porer tar index pathaye dilam
    ret = max(ret, arr[i].cost); //porer ta ke nibo na

    return dp[i]=ret;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i].st>>arr[i].en>>arr[i].cost;

    sort(arr+1,arr+1+n,compare); //starting time hishebe sort


    for(int i=1; i<=n; i++)
    {
        st.insert(pii(arr[i].st,i)); //start time aar index er pair niye sort korsi set e
    }

    memset(dp,-1,sizeof(dp));

    cout<<rec(1)<<endl;


    return 0;
}
