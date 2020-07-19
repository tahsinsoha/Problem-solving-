#include<iostream>
#include<cstring>

using namespace std;
   int main()
   {
       int n,k,i,j,t,m;
        cin>>n>>k;
       char a[n];
       cin>>a;

        for ( j=0; j<k; j++)
        {
             for( i=0; i<n; )
               {

                   if ( a[i]=='B' && a[i+1]=='G' )
                   {
                         swap(a[i],a[i+1]);

                          i=i+2;
                     }
                      else
                        i++;
                }
        }

               cout<<a<<endl;
   }
