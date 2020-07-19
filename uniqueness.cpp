#include<bits/stdc++.h>
using namespace std;
long double arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=1; i<=n; i++)
    {

        cin>>arr[i];
        st.insert(arr[i]);

    }
    if(st.size()==n)
    {
        cout<<0<<endl;
        return 0;
    }
    int j=-1,k=-1,m=-1,l=-1;
    set<int>left,right,mid;
    int ans = INT_MAX;
    for(int i=n; i>=1; i--)
    {
        if(right.count(arr[i]))
        {

            j=i ;
            break;

        }
        right.insert(arr[i]);
    }

    if(j!=-1)
        ans=min(ans,j);
    //cout<<ans<<endl;

    for(int i=1; i<=n; i++)
    {
        if(left.count(arr[i]))
        {

            break;

        }
        left.insert(arr[i]);



        //  cout<<ans<<endl;

        mid=left;
        int r;
        for( r=n; r>i; r--)
        {
            if(mid.count(arr[r]))
            {

                break;

            }
            mid.insert(arr[r]);

        }

            ans=min(ans, abs(r-i));
        //cout<<ans<<endl;
    }

    cout<<ans<<endl;


    return 0;
}


