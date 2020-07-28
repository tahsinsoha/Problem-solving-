#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int h[n+7];
        bool f=0;
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(h[i]<h[i+1]-k)
                m-=h[i+1]-k-h[i];

            else
            {
                m+=h[i]-max(h[i+1]-k,0);
            }

            if(m<0)
            {
                     f=1;
                cout<<"NO"<<endl;
                break;
            }
        }
       if(f==0) cout<<"YES"<<endl;

    }


    return 0;
}
