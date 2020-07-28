#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        if(n%2==0)
        {
            if(n%6==0)
            {
                int cnt=0;
                while(n>1 && n%6==0)
                {
                    n/=6;
                    if(n%2 && n>1 ) n*=2,cnt++;
                    cnt++;
                    //cout<<n<<endl;
                }
                if(n==1)
                    cout<<cnt<<endl;
                else
                    cout<<-1<<endl;
            }
            else
                cout<<-1<<endl;
        }

        else
        {
           if(n==1) cout<<0<<endl;
           else if( ((n*2)%6) !=0)
                cout<<-1<<endl;

            else
            {
                n*=2;

                int cnt=0;
                while(n>1 && n%6==0)
                {
                    n/=6;
                    if(n%2 && n>1) n*=2,cnt++;
                   // cout<<n<<endl;
                    cnt++;
                }
                if(n==1)
                    cout<<cnt+1<<endl;
                else
                    cout<<-1<<endl;
            }
        }


    }
    return 0;

}












