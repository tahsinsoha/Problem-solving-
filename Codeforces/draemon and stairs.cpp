#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int n,m;
    cin>>n>>m;

    if(m>n)
        {
            cout<<-1<<endl;
            return 0;

        }

         if(n%2) n=n/2+1;
        else n=n/2;

   if( m  >=  (n) )
        cout<<m<<endl;


    else if( m<(n))
    {

         for(int i=2;;i++){
            if( (m*i) >=(n) ){
                cout<<m*i<<endl;
                break;
            }
         }
    }
    return 0;
}





