#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n<=3)
            cout<<-1<<endl;

        else if(n%2==0)
        {
            cout<<n/4<<endl;
        }

        else
        {

            if(n<9 || n==11)
                cout<<-1<<endl;

            else
                cout<<1+(n-9)/4<<endl;
        }
    }


    return 0;

}













