#include<bits/stdc++.h>
using namespace std;
long long count(long long N, long long K)
{
    long long res;
    long long mul=1;
    long long cnt=0;
    do
    {
        mul= mul*K;
        res = N/mul;
        cnt=cnt+res;
    } while(res);
    return cnt;
}
long long countDivisor(long long N, long long a){
long long cnt=0;
while(N%a==0){
    cnt++;
    N=N/a;
}
return cnt;
}
int main()
{
    int tc,t;
    long long n,r,p,q;
    scanf("%d",&tc);
    for(t=1; t<=tc; t++)
    {
        // long long n,r,p,q;
        scanf("%lld%lld%lld%lld",&n,&r,&p,&q);
        long long ans;
        ans =min( countDivisor(p, 5)*q + count(n, 5) - count(r, 5) - count(n-r, 5), countDivisor(p,2)*q + count(n, 2) - count(r, 2) - count(n-r, 2)  );

        printf("Case %d: %lld\n", t, ans);
    }



    return 0;
}
