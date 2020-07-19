#include<bits/stdc++.h>
using namespace std;
 int arr[100005],brr[100005];

int main()
{
    int t,n;
    cin>>t;
while(t--){
        cin>>n;
pair<int,int>p[n+7];
        for(int i=0;i<n;i++)
          {

           cin>>arr[i];


          }

           for(int i=0;i<n;i++)
          {


 p[i]  = pair<int,int>(arr[i],i);

          }
          sort(p,p+n);
          int minn = p[0].second;
          bool f=0;
          cout<<minn<<endl;
  for(int i=0; i<n; i++){
      if(p[i].second>minn ) {
        f=1;
        cout<<"YES"<<endl;
        cout<<minn+1<<" "<<p[i].second+1<<endl;
             break;
      }
      else minn= min(minn,p[i].second);

  }
  if(f==0) cout<<"NO"<<endl;
}

   return 0;
}







