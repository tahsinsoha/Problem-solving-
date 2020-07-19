#include<bits/stdc++.h>
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

        int n;
        cin>>n;
        map<int,int>cnt;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            cnt[arr[i]]++;

        }

         vector<int>ans;
        while(1)
        {
               int f=0;
            for(int i=0; i<n; i++)
            {

                if(arr[i]!=i)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                break;

            int m;
            for(int i=0; i<=n; i++)
            {
                if(cnt[i]==0)
                {
                    m=i;
                    break;
                }
            }

            if(m==n)
            {

                for(int i=0; i<n; i++)
                {

                    if(arr[i]!=i)
                    {
                        cnt[arr[i]]--;
                        arr[i]=m;
                        cnt[m]++;
                        ans.push_back(i+1);
                        break;
                    }
                }
            }

            else
            {

                cnt[arr[m]]--;
                arr[m]=m;
                cnt[m]++;
                ans.push_back(m+1);
            }


        }


        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";

        cout<<endl;


    }


    return 0;

}









