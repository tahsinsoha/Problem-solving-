#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,y;
    cin>>p>>y;

    if(y%2==0)
        y=y-1;
    long long ans=-1;
    for(long long i=y; i>p; i-=2)
    {
        int f=0;
        //long long ans=-1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j == 0 )
            {

                if(j>p)
                {
                    cout<<i<<endl;
                    return 0;
                }
                else
                {
                    f=1;
                    break;
                }
            }





        }

        if(f==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}














