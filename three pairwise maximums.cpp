#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

      map<int,int>mpp;
      for(int i=1;i<=3;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
      }
      sort(arr+1,arr+3+1);

      if(mpp[arr[3]]==3 ){
        cout<<"YES"<<endl;
        cout<<arr[3]<<" "<<arr[3]<<" "<<arr[3]<<endl;
      }
      else if(mpp[arr[3]]==2){


           cout<<"YES"<<endl;

           cout<<arr[1]<<" "<<arr[1]<<" "<<arr[3]<<endl;


      }

      else cout<<"NO"<<endl;
    }


    return 0;

}








