#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long n,k;

        cin>>n>>k;
        if(n<=k)
        {
            cout<<1<<endl;
            continue;
        }
        long long ans=n;
        vector<long long>v;
        for(long long int i=1; i<= sqrt(n) ; i++)
        {
            //if(i>k) break;
            if(n%i==0  )
            {
                if((n/i) ==i)
                    v.push_back(i);

                else
                {
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }


        sort(v.begin(),v.end(),greater<int>());

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<=k)
            {
                ans = v[i];
                break;

            }
        }

        cout<<n/ans<<endl;


    }



    return 0;


}
















