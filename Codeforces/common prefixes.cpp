#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
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
        int maxx=INT_MIN;
        map<int,string>mpp;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            maxx=max(arr[i],maxx);

        }
        if(maxx<=0)
            maxx=1;
        int i;
        string s="";
        if(arr[1]==0)
        {
            for(int m=1; m<=maxx; m++)
                s+='a';
        }
        else
        {
            for( i=1; i<=arr[1]; i++)
            {
                s+='a';
            }

            for(; i<=maxx; i++ )
            {
                s+='b';
            }

        }

        mpp[0]=s;

        for(int j=1; j<=n; j++)
        {

            s="";
            string t=mpp[j-1];
            int k;
            if(arr[j]==0)
            {
                for(int m=1; m<=maxx; m++)
                {
                    {
                        if(t[0]=='a')
                            s+='b';
                        else
                            s+='a';
                    }
                }

                mpp[j]=s;

                continue;

            }

            for( k=1; k<=arr[j]; k++)
            {
                s+=t[k-1];
            }

            char n = t[k-1];
            for(; k<=maxx; k++)
            {
                if(t[k-1]=='a')
                    s+='b';
                else
                    s+='a';
            }

            mpp[j]=s;


        }

        for(int j=0; j<=n; j++)
            cout<<mpp[j]<<endl;





    }


    return 0;

}








