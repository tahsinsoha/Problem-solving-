#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,tc;
    long long a,sum;
    long long Xor= 0;
    cin>>t;
    for( tc=1; tc<=t; tc++)
    {
        cin>>m>>n;
            Xor=0;
        for(int i=0; i<m; i++)
        {
            sum=0;
            for(int j=0; j<n; j++)
            {
                cin>>a;
                sum=sum+a;
            }
            Xor= Xor^sum;

        }
        printf("Case %d: ",tc);

        if(Xor==0) {
            cout<<"Bob"<<endl;
        }
        else cout<<"Alice"<<endl;

    }


    return 0;
}
