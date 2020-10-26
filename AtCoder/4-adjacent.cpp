#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int cnt=0,cnt2=0;;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;

        if(x%4==0)
            cnt++;

        else if(x%2==0)
            cnt2++;
    }

    if((cnt+ cnt2/2)>=(n/2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    return 0;

}













