#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long l,r,m;
        cin>>l>>r>>m;
        int temp=m;
        if(m%2)
            m--;
        long long a;

        for(long long i=1; i*i<=m; i++)
        {

            if(m%i==0)
            {
                if(m>=l && m<=r)
                {
                    a=m;
                    break;
                }

                else if( m/i>=l && m/i<=r)
                {
                    a=m/i;
                    break;
                }


            }
        }

        if(temp==1)
            cout<<l<<" "<<l<<" "<<r<<endl;
        else if(temp%2)
            cout<<a<<" "<<r<<" "<<r-1<<endl;
        else if(temp%2==0)
            cout<<a<<" "<<r<<" "<<r<<endl;


    }




    return 0;

}





 
