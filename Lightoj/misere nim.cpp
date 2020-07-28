#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int n;

int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>n;
    int flag = 0;
      for(int j=0;j<n;j++)
           {
               cin>>arr[j];
               if( arr[j] !=1) flag=1;

           }
      int k = arr[0];
      for(int j=1;j<n;j++){
        k= k^arr[j];
      }
      printf("Case %d: ",i);
      if(flag==0) {
        if(n%2==0)
            cout<<"Alice"<<endl;
        else   cout<<"Bob"<<endl;
      }
      else {
        if(k==0)
             cout<<"Bob"<<endl;
        else  cout<<"Alice"<<endl;
      }


}
return 0;
}
