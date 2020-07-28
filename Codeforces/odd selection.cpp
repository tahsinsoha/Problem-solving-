#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int odd = 0,ev =0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
                odd++;
            else
                ev++;

        }
        int flag=0;
        for(int i=1; i<=odd; i+=2)
        {
            if(i>x)
                break;

            int p = x-i;
            if(p<=ev)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}













