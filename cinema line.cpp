#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;

    cin>>n;
    int sum25=0,sum50=0, sum100=0;;
    for(int i=0; i<n; i++)
    {

        cin>>a;
        if(a==25)
            sum25++;

        else if(a==50)
        {
            if(sum25>=1)
            {
                sum25--;
                sum50++;

            }
            else
            {

                cout<<"NO"<<endl;
                return 0;
            }


        }

        else
        {

            if(sum25>=1 && sum50>=1)

            {
                sum25--;
                sum50--;
                // sum100++;
            }

            else if( sum25>=3 )
            {
                sum25-=3;

            }

            else
            {

                cout<<"NO"<<endl;
                return 0;

            }
        }


    }

    cout<<"YES"<<endl;
    return 0;
}
