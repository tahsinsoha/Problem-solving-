#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans= n/k;
        int rem= n%k;
        int temp=96;
        for(int i=1; i<=k; i++)
        {
           for(int j= 1;j<=ans;j++) {
            cout<< char(temp+i);
           }
        }
        for(int i=1;i<=rem;i++) cout<<'a';
        cout<<endl;
    }

    return 0;
}
