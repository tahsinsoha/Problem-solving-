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
        cin>>n;
        long long a;
        deque<long long>dq;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            dq.push_back(a);
        }
        long long cnt=0, pv = 0,sum=0,sum1=0,sum2=0;
        while(!dq.empty())
        {
            int f1=0,f2=0;
            pv = sum;
            sum=0;
            // cout<<sum<<" "<<pv<<endl;
            while(sum<=pv && !dq.empty())
            {
                f1=1;
                // cout<<sum<<" "<<pv<<endl;
                // cnt++;
                sum+=dq.front();
                sum1+=dq.front();
                // cout<<sum<<" "<<pv<<endl;
                dq.pop_front();


            }
            if(f1)
                cnt++;
            pv = sum;
            sum=0;
            // cout<<sum<<" "<<pv<<endl;

            while(sum<=pv && !dq.empty())
            {
                f2=1;
                // cout<<sum<<endl;
                //cnt++;
                sum+=dq.back();
                sum2+=dq.back();
                // cout<<sum<<" "<<pv<<endl;
                dq.pop_back();

            }


            if(f2)
                cnt++;
        }
        cout<<cnt<<" "<<sum1<<" "<<sum2<<endl;


    }
    return 0;
}










