#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    int a,b,c;
    int x,y,z;
    cin>>n>>a>>b>>c;
    vector<int> rib(n+1);


    rib[0]=0;

    for(i=1;i<=n;i++)
    {
        x=y=z=-1;

        if(i>=a)
            x=rib[i-a];

        if(i>=b)
            y=rib[i-b];

        if(i>=c)
            z=rib[i-c];

        if(x==-1 && y==-1 && z==-1)
            rib[i]=-1;

        else
            rib[i]=max(max(x,y),z)+1;
    }

    if(rib[n]==-1)
        return 0;

    else
        cout<<rib[n];

    cout<<endl;

    return 0;
}
