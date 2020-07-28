#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        long long a;
        long long sum=0;
       for(int i=1;i<=n;i++)
       {
           cin>>a;
           arr[i]=arr[i-1]+a;
       }
      long long ans1=-1,ans2=-1;
      long long cnt=0;
      if(arr[n]%x) {
        cout<<n<<endl;
        continue;
      }
       for(int i=1;i<=n;i++){
        if(arr[i]%x) {
            ans1=n-(cnt+1);
            break;
        }
        cnt++;
       }
     cnt=0;
        for(int i=n;i>=1;i--){
        if(arr[i]%x) {
            ans2=(n-cnt-1);
            break;
        }
       }
       //cout<<ans1<<" "<<ans2<<endl;
   if(ans1==-1 && ans2==-1) cout<<-1<<endl;

   else cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}













 
