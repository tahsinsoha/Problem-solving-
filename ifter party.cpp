#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,piaju,left,eaten;
    set<long long int>v;
     scanf("%lld",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%lld%lld",&piaju,&left);
        eaten=piaju-left;
        if(eaten<left)
        {
            printf("Case %d: impossible",j);
        }
        else if(eaten%2!=0)
        {
           printf("Case %d: %lld",j,eaten);
        }
        else if(eaten%2==0)
        {
            for(int i=1; i<=sqrt(eaten); i++)
            {
                if(eaten%i==0)
                {
                    if(left<i){
                    v.insert(i);
                    }
                    if(i!=(eaten/i)){
                            if(left<(eaten/i)){
                        v.insert(eaten/i);
                            }
                    }
                }
            }

            printf("Case %d: ",j);
            set<long long int>::iterator it;
            for(it =v.begin();it!=v.end(); it++)
            {
                printf("%d ",*it);
            }

        }
        v.clear();
    }
    return 0;
}
