#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long ps[1000007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<long long,long long>mpp;
        mpp[0]++;

        long long sum=0;
        long long res=0;

        for(int i=1; i<=n; i++)
        {
            sum+=s[i-1]-48;
            res+=mpp[sum-i];
            // aagey joto gula same sum ache and bortoman sum er middle e joto value  oita additional info add kortese na mane, (sum-i) ei
            //range e zero. mane sum aar i shoman. orthat subarray er value 0
            mpp[sum-i]++;

        }

        cout<<res<<endl;
    }


}







