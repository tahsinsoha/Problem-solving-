#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    double ox,oy,ax,ay,bx,by;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double oad=sqrt((ax-ox)*(ax-ox)+ (ay-oy)*(ay-oy));
        double abd=sqrt((ax-bx)*(ax-bx)+ (ay-by)*(ay-by));
        double obd=sqrt((ox-bx)*(ox-bx)+ (oy-by)*(oy-by));
        double div=(oad)*(oad)+(obd)*(obd)-(abd)*(abd);
        double theta=acos(div/(2*oad*obd));
        double res=oad*theta;
        cout<<"Case "<<i<<": ";
        cout<<setprecision(5)<<fixed<<res<<endl;

    }
}
