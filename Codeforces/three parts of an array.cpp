#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,inp,i,j;
    vector<long long int>v;
    cin>>n;
    long long int l=0,r=n-1,sum1=0,sum3=0,ans=0;
    for( i=0; i<n; i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    for( l=0,r=n-1; l<=r;)
    {

        if(sum1<=sum3)
        {
            sum1=sum1+v[l];
            l++;
        }
        else
        {
            sum3=sum3+v[r];
            r--;
        }
        if(sum1==sum3)
        {
            ans=sum1;
        }

    }
    cout<<ans;
    return 0;
}
