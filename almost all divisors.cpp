#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        vector<long long> arr(n);
        //int maxx=0;
       // int flag=0;
       // int a;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            //maxx=max(maxx,)
        }
        sort(arr.begin(),arr.end());

        long long  ans = arr[0]*arr[n-1];
       // cout <<ans<<endl;
        vector<long long>brr;
      for (int i = 2; i * 1ll * i <= ans; ++i) {
			if (ans % i == 0) {
				brr.push_back(i);
				if (i != ans / i) {
					brr.push_back(ans / i);
				}
			}
		}
        sort(brr.begin(),brr.end());

        if(arr==brr)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}
