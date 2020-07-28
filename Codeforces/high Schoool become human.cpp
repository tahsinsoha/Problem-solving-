#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,a1,b1,ans;
    cin>>a>>b;
    a1=b*log(a);
    b1=a*log(b);
    ans=a1-b1;
    if(ans>0)
        cout<<">"<<endl;
    else if(ans<0)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;



    return 0;
}
