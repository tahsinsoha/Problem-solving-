#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    int n,k;

    while(t--)
    {
        deque<int>dq;
        vector<int>v;
        cin>>n>>k;
        int a;
        for(int i=0; i<n ; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        for(int i=0; i<n ; i++)
        {
            cin>>a;
            dq.push_back(a);
        }

        sort(v.begin(),v.end());
        sort(dq.begin(),dq.end(), greater<int>());
        int m=0;
        for(int i=0; i<v.size(); i++)
        {

            if(m==k)
                break;

            if(dq.front()>v[i])
            {
                v[i]=dq.front();
                dq.pop_front();
                m++;

            }

        }
        long long sum=0;
        for(int i=0; i<v.size(); i++)
        {

            sum+=v[i];
        }
        cout<<sum<<endl;
    }







    return 0;
}

