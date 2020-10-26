#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long ps[1000007];
   int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


		int n; cin>>n;

        for(int i=1;i<=n;i++)
            cin>>arr[i];


        map<long long,long long>mpp;
        mpp[0]++;

        long long sum=0;
        long long res=0;

        for(int i=1; i<=n; i++)
        {
            sum+=arr[i];
            if(mpp[sum])
            {
              res++;
              mpp.clear();
              mpp[0]++;
              sum=arr[i];
              mpp[sum]++;
            }

            else
            {
                mpp[sum]++;
            }


        }

        cout<<res<<endl;



	return 0;
}






