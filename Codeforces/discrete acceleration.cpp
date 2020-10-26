#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;


        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }

        int i=1,j=n;
        double sp=0,ep=k, ss=1,es=1,t=0;

        while(i<=j)
        {
            double d1 = arr[i]-sp;
            double d2 = ep-arr[j];
            double t1 = d1/ss;
            double t2 = d2/es;

            if(t1>t2)
            {
                es++;
                ep=arr[j];
                sp+=ss*t2;
                j--;
                t+=t2;
            }

            else
            {
                ss++;
                sp=arr[i];
                ep-=es*t1;
                i++;
                t+=t1;
            }
        }

        t+=(ep-sp)/(ss+es);
        cout << std::fixed << std::setprecision(10) << t << endl;



    }


    return 0;

}












