#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        long long a,b,n;

        cin>>a>>b>>n;
        int cnt=0;
        for(int i=1;; i++)
        {

            if(a>n || b>n)
                break;

           if(a>=b) b+=a;
           else a+=b;
            cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;

}


