#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n;
string s;
int rec(int l, int r, char c )
{
    //cout<<l<<" "<<r<<endl;
    int mid=(l+r)/2;
    // cout<<l<<" "<<r<<" "<<mid<<endl;
    if(l>r)
        return 0;

    if(l==r-1)
    {
        if(s[l]==c)
            return 0;
        else
            return 1;
    }
    int cnt1=0,cnt2=0;

    for(int i=l; i<mid; i++)
        if(s[i]!=c)
            cnt1++;

    for(int i=mid; i<r; i++)
        if(s[i]!=c)
            cnt2++;

    //  cout<<cnt1<<" "<<cnt2<<endl;


    return min((cnt1+rec(mid,r,c+1)),(cnt2+rec(l,mid,c+1)));

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;

        cout<<rec(0,n,'a')<<endl;


    }



    return 0;

}











