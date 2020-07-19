#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s;
    double x;
    cin>>n>>m;
    int seq[n+1];
    int L[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>s>>x;
        seq[i]=s;

    }
    for(int i=0; i<n; i++)
        L[i]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(seq[i]<=seq[j])
            {
                if(L[j]<L[i]+1)
                    L[j]=L[i]+1;
            }
        }
    }
    int maxx=0;
    for(int i=0;i<n;i++){

        if(maxx<L[i])
            maxx=L[i];
    }
cout<<n-maxx<<endl;
    return 0;
}
