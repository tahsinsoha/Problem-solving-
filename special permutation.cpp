#include<bits/stdc++.h>
using namespace std;
long long int arr[1007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int n,k,m;
    string s;

    while(t--)
    {
        int n,k,m;
        cin>>n;
        for(int i=1; i<1007; i++ )
            arr[i]=0;

        int last;
        if(n<=3)
            cout<<-1<<endl;
      else if (n==4){
        cout <<"3 1 4 2"<<endl;
      }

    else
        {

            for(int i=1; i<=n; i+=2)
            {
                cout<<i<<" ";
                arr[i]=1;
                last=i;
            }
            cout<<last-3<<" ";
            arr[last-3] =1;

            for(int i=n; i>=1; i--)
            {
                if(!arr[i])
                    cout<<i<<" ";
            }

            cout<<endl;
        }

    }
    return 0;
}













