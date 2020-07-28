#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    long long minn = min(a/3, min(b/2,c/2));

    a-=3*minn;
    b-=2*minn;
    c-=2*minn;

    // long long t1=a,t2=b,t3=c;

    long long ans = minn*7;

    int arr[] = {0,0,1,2,0,2,1};
    long long maxx = INT_MIN;
    long long int cnt=0;
    for(int i=0; i<7; i++)
    {
        // maxx = INT_MIN;
        int brr[4];
        brr[0] =a, brr[1] = b, brr[2] = c;
        cnt=0;
        for(int j=i; j<7+i; j++)
        {

            if(brr[arr[j%7]])
                cnt++,brr[arr[j%7]]--;
            else
                break;
        }
        maxx = max(maxx,cnt);


    }

    cout<<ans+maxx<<endl;

    return 0;

}










