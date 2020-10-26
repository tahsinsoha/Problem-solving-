#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long ans[1000007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        for(int i=1; i<=n; i++)
            cin>>arr[i];
        arr[n+1]=arr[1];
        arr[0]= arr[n];

        for(int i=1; i<=n; i++)
            cin>>cs[i];
        cs[n+1]=cs[1];
        cs[0]=cs[n];

        for(int i=1; i<=n; i++)
            cin>>ps[i];
        ps[n+1]=ps[1];
        ps[0]=ps[n];

        int i=1;

        if((arr[i]!=arr[i-1] || arr[i]!= cs[i-1] || arr[i]!= ps[i-1]) )
        {
            if(arr[i]!=arr[i+1] || arr[i]!= cs[i+1] || arr[i]!= ps[i+1])
            {
                ans[i]=arr[i];
            }


        }

        else if((cs[i]!=arr[i-1] || cs[i]!= cs[i-1] || cs[i]!= ps[i-1]) )
        {
            if(cs[i]!=arr[i+1] || cs[i]!= cs[i+1] || cs[i]!= ps[i+1])
            {
                ans[i]=cs[i];
            }


        }

        else if((ps[i]!=arr[i-1] || ps[i]!= cs[i-1] || ps[i]!= ps[i-1]) )
        {
            if(ps[i]!=arr[i+1] || ps[i]!= cs[i+1] || cs[i]!= ps[i+1])
            {
                ans[i]=ps[i];
            }


        }


        for( i=2; i<=n; i++)
        {
            if(i==n)
            {
                if((arr[i]!=arr[i-1] || arr[i]!= cs[i-1] || arr[i]!= ps[i-1]) && arr[i]!=ans[i-1] && arr[i]!=ans[1])
                {
                    if(arr[i]!=arr[i+1] || arr[i]!= cs[i+1] || arr[i]!= ps[i+1])
                    {
                        ans[i]=arr[i];
                    }


                }

                else if((cs[i]!=arr[i-1] || cs[i]!= cs[i-1] || cs[i]!= ps[i-1]) && cs[i]!=ans[i-1] && cs[i]!=ans[1])
                {
                    if(cs[i]!=arr[i+1] || cs[i]!= cs[i+1] || cs[i]!= ps[i+1])
                    {
                        ans[i]=cs[i];
                    }


                }

                else if((ps[i]!=arr[i-1] || ps[i]!= cs[i-1] || ps[i]!= ps[i-1]) && ps[i]!=ans[i-1] && ps[i]!=ans[1])
                {
                    if(ps[i]!=arr[i+1] || ps[i]!= cs[i+1] || cs[i]!= ps[i+1])
                    {
                        ans[i]=ps[i];
                    }


                }

            }
            else
            {
                if((arr[i]!=arr[i-1] || arr[i]!= cs[i-1] || arr[i]!= ps[i-1]) && arr[i]!=ans[i-1])
                {
                    if(arr[i]!=arr[i+1] || arr[i]!= cs[i+1] || arr[i]!= ps[i+1])
                    {
                        ans[i]=arr[i];
                    }


                }

                else if((cs[i]!=arr[i-1] || cs[i]!= cs[i-1] || cs[i]!= ps[i-1]) && cs[i]!=ans[i-1])
                {
                    if(cs[i]!=arr[i+1] || cs[i]!= cs[i+1] || cs[i]!= ps[i+1])
                    {
                        ans[i]=cs[i];
                    }


                }

                else if((ps[i]!=arr[i-1] || ps[i]!= cs[i-1] || ps[i]!= ps[i-1]) && ps[i]!=ans[i-1])
                {
                    if(ps[i]!=arr[i+1] || ps[i]!= cs[i+1] || cs[i]!= ps[i+1])
                    {
                        ans[i]=ps[i];
                    }


                }
            }
        }


        for(int i=1; i<=n; i++)
            cout<<ans[i]<<" ";

        cout<<endl;

    }


    return 0;

}
















