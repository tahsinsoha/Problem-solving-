#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    while (scanf("%d",&n),n)
    {
        priority_queue <int, vector <int>, greater <int> > pq;//ascending order
        for (i=1;i<=n;i++)
        {
            int x;
            scanf("%d",&x);
            pq.push (x);
        }
        int total=0,cost=0;
        while (pq.size() > 1)
        {
            total=pq.top();
            pq.pop ();
            total=total+pq.top ();
            pq.pop ();
            cost= cost+total;
            pq.push (total);
        }
        printf("%d\n",cost);
    }

}

