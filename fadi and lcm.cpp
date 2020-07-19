#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int n;
    cin>>n;
    int div;
    for(int i= sqrt(n); i>=1; i--)
    {
        if(n%i==0)
        {

            div=n/i;
           //cout<<i<<endl;
          //cout<<div<<endl;
            if( (i!=1) && (i%div==0 || div%i==0))
                continue;

            else
            {
                if(div>i)
                    cout<<i<<" "<<div<<endl;
                else
                    cout<<div<<" "<<i<<endl;

                return 0;
            }
        }

    }

    return 0;
}

