#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int p=n;
    int got[n+5];
    memset(got,0,sizeof(got));

    for(int i=0; i<n; i++)
    {

        cin>>x;
        got[x]=1;
        while(got[p])
        {
           cout<<p<<" ";
           p--;
        }
        cout<<endl;
    }


    return 0;
}







