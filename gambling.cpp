#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int n;
    cin>>n;

    priority_queue<int>p,q;

    int a;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        p.push(a);
    }
    p.push(-1);
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        q.push(a);
    }
    q.push(-1);

    long long sum1=0,sum2=0;
    while(1)
    {
        if(p.top()== -1 && q.top() ==-1)
            break;

        if( p.top()>q.top())
        {
            if(p.top()!=-1)
            {
                sum1+=p.top();
                p.pop();
            }

        }

        else
        {
            if(q.top()!=-1)
                q.pop();
        }


        if( q.top()>p.top())
        {
            if(q.top()!=-1)
            {
                sum2+=q.top();
                q.pop();
            }

        }

        else
        {
            if(p.top()!=-1)
                p.pop();
        }

    }

    cout<<sum1-sum2<<endl;

    return 0;
}













