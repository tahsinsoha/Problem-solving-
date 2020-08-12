#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n;
string s1,s2;
bool eq(int l1, int r1, int l2, int r2)
{

    for(int i=l1,j=l2; i<=r1,j<=r2; i++,j++)
        if(s1[i]!=s2[j])
            return 0;

    return 1;
}

bool iseq(int l1, int r1, int l2, int r2 )
{
    if(eq(l1,r1,l2,r2))
    {
        return 1;
    }

    if((r1-l1+1)&1)
        return 0;
    int m1 = (l1+r1)/2;
    int m2 = (l2+r2)/2;

    if( (iseq( l1, m1, l2, m2 ) and iseq( m1+1, r1, m2+1, r2  )  )
            or ( iseq( l1, m1, m2+1, r2 ) and iseq( m1+1, r1, l2, m2 )  ) )
        return 1;
    return 0;

}
int main()
{
    cin>>s1;
    cin>>s2;

    int n= s1.size();
    int m= s2.size();

    if(iseq(0,n-1,0,m-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;

}












