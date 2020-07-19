#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
    long long  int n,k;
    string s;

    while(t--)
    {
        cin>>n>>k;
        long long l = 1, r = 1000000000000000000;
         long long ans;

        while(l<=r)
        {

            long long mid  = (l+r)/2;
            long long d = mid - (mid/n);


            if(d==k){
                ans = mid;
                break;
            }

            else {
                if(d>k){
                    r = mid-1;
                }
                else l = mid+1;
            }

        }

        if(ans%n==0) ans--;
        cout<<ans<<endl;


    }
    return 0;
}









