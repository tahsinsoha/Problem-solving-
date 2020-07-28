#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;

        long long x=2;
        long long sum=3;

        for(int i=1;; i++)
        {

            if((n%sum)==0)
            {
                cout<< (n/sum)<<endl;
                break;
            }
            x*=2;
            sum+=x;
        }

    }

    return 0;
}




