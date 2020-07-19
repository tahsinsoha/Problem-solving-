#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;

        int lc = c-d;
        int rc = c+d;
        int la = a-b;
        int ra = a+b;
        int flag =0;
        int zomb = lc - ((la)*n);
        int grr = (ra-la)*n;

        if( (la*n)> rc)
            cout<<"NO"<<endl;

        else if ((la*n)>= lc &&  (la*n)<=rc)
            cout<<"YES"<<endl;

        else
        {
            if(grr>=zomb)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }
    }

    return 0;
}


