#include<bits/stdc++.h>
using namespace std;
int arr[5][100007];
int main()
{
    int n,q,a,b,ans=0;

    cin>>n>>q;
    while(q--)
    {
        cin>>a>>b;
//ans=0;
        if(arr[a][b]==0)
        {
            arr[a][b]=1;
            if(a==1)
                ans+= arr[2][b]+arr[2][b-1]+arr[2][b+1];

            else  if(a==2)
                ans+= arr[1][b]+arr[1][b-1]+arr[1][b+1];


        }

        else  if(arr[a][b]==1)
        {
            arr[a][b]=0;
            if(a==1)
                ans-= arr[2][b]+arr[2][b-1]+arr[2][b+1];

            else  if(a==2)
                ans-= arr[1][b]+arr[1][b-1]+arr[1][b+1];


        }

        if(ans==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}

