#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long n;
    cin>>n;
    cs[1]=1;
    map<long long, long long>mpp;
    mpp[0]++;
    for(int i =2;; i++)
    {

        cs[i]=cs[i-1]+cs[i-2];


        if(cs[i]>1000000000)
            break;

        mpp[cs[i]]++;
    }
    int f=0;
    for(int i=1; i<=90; i++)
    {
        for(int j=i; j<=90; j++)
        {

            if(cs[i]+cs[j]>n)
                break;

            if(mpp[n-cs[i]-cs[j]])
            {
                cout<<cs[i]<<" "<<cs[j]<<" "<<n-cs[i]-cs[j]<<endl;
                f=1;
                break;
            }
        }

        if(f==1)
            break;
    }



    return 0;

}










