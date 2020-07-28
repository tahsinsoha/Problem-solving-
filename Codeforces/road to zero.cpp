#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long  int a,b,x,y;
         long long int ekla, dokla, minn;
        cin>>x>>y;
        cin>>a>>b;
        if(x ==0 && y==0)
        {
            cout<<0<<endl;
            continue;
        }

        else
        {
            ekla =  (x+y)*a;
            minn = min(x,y);
            dokla = minn*b+ (x-minn)*a + (y-minn)*a;


        }

        cout<<min(ekla,dokla)<<endl;

    }


    return 0;
}



