#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,citynumb,index,one,ans;
    cin>>n;
    // unsigned  long long int ans=100000;
    map< unsigned long long int,unsigned long long int>mpp;
    cin>>one;
    ans=one;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(i=1; i<n; i++)
    {
        cin>>citynumb;
        mpp[citynumb]=i;

        ans=min(ans,citynumb);
        index=mpp[ans];
    }
    if()

    cout<<index+1;
    return 0;
}
