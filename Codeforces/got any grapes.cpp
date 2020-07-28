#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,g,p,bl;
    cin>>a>>b>>c;
    cin>>g>>p>>bl;
    if(g-a<0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(g-a>=0)
    {
        int r=g-a;
        if(r+p-b<0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
             int rr=r+p-b;
             if(rr+bl-c<0){
                cout<<"NO"<<endl;
                return 0;
             }
             else {
                cout<<"YES"<<endl;


             }
        }
    }
    return 0;
}
