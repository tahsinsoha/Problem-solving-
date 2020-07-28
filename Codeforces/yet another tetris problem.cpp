#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
   int n;
   int arr[5007];
    while(t--)
    {
        cin>>n;
          map<int,int>mpp;
          map<int,int>ind;
          int flag=0;
          int d1=0,d2=0;
          for(int i=0;i<n;i++)
          {

              cin>>arr[i];

            if(arr[i]%2) d1++;
            else d2++;
          }

          if(d1 && d2 ) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
    }



}



