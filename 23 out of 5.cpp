#include <bits/stdc++.h>
using namespace std;

int arr[7];
bool found= 0;

void prob( vector<int> v,bool taken[] )
{
    if(found)
        return;
    if(v.size()==5)
    {
        if(v[4]==23)
            {
                printf("Possible\n");
                found= 1;
            }
        return;
    }

    for(int i=0;i<5;i++)
    {
        if(taken[i])
            continue;
        if(!v.size())
        {
            taken[i]= 1;
            v.push_back(arr[i]);
            prob(v,taken);
            v.pop_back();
            taken[i]= 0;
        }
        else
        {
            int sz= v.size();
            taken[i]= 1;
            v.push_back( v[sz-1]+arr[i] );
            prob( v,taken );
            v.pop_back();
            v.push_back( v[sz-1]-arr[i] );
            prob( v,taken );
            v.pop_back();
            v.push_back( v[sz-1]*arr[i] );
            prob( v,taken );
            v.pop_back();
            taken[i]= 0;
        }
    }
}

int main()
{
    while(1)
    {
        int sum= 0;

        for(int i=0;i<5;i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }

        if(sum==0)
            break;

        bool taken[7];
        memset(taken,0,sizeof(taken));
        vector<int> v;
        prob(v,taken);

        if(!found)
            printf("Impossible\n");
        found= 0;
    }
}

