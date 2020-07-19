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
          for(int i=0;i<n;i++)
            cin>>arr[i];
               for(int i=1;i<n;i++){

                if(arr[i]!=arr[i-1]) {

                    flag=1;
                    break;
                }
               }

               if(flag==0) {
                cout<<"YES"<<endl;
                continue;
               }
        sort(arr,arr+n);

          arr[0]+=2;

          sort(arr,arr+n);

          if(arr[n-1]!=arr[n-2]) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
    }



}



