#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>n;

         int sum=0;

           for(int j=0;j<n;j++)
        {
            int g,w;
            cin>>g>>w;
            sum^=(w-g-1);

        }
         printf("Case %d: ",i);
         if(sum==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

}

return 0;
}

