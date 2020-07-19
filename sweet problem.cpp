#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,r,g,b;
   cin>>t;
   int arr[3];
   while(t--){

for(int i=0;i<3;i++){
    cin>>arr[i];

}
sort(arr,arr+3);
if(arr[2] <= arr[0]+arr[1]) cout<<(arr[0]+arr[1]+arr[2])/2<<endl;

else cout<< arr[0]+arr[1] <<endl;

   }

    return 0;
}








