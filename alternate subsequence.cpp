#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    long long  int n;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int flag;
        long long int maxx =0, minn=INT_MIN;
        if(arr[0]>0)
            flag=1;
        else
            flag = 0;

        maxx=arr[0];

        long long sum=arr[0];
        for(int i=0; i<n; i++)
        {
            if(flag ==1 && arr[i]>0)
            {
                if(maxx<arr[i])
                {
                    sum-=maxx;
                    sum+= max(arr[i],maxx);
                    maxx=arr[i];
                }

            }

            else if (flag==1 && arr[i]<0 )
            {
                maxx= arr[i];
                sum+=max(maxx,arr[i]);
                flag=0;
            }

            else if(flag ==0 && arr[i]<0)
            {
                if(maxx<arr[i])
                {
                    sum-=maxx;
                    sum+= max(arr[i],maxx);
                    maxx=arr[i];
                }
            }

            else if (flag==0 && arr[i]>0 )
            {
                maxx = arr[i];
                sum+=max(maxx,arr[i]);
                flag=1;
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}




