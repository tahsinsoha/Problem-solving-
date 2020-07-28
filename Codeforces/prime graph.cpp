#include<bits/stdc++.h>
using namespace std;
int arr[1010];
bool brr[1010];
void sieve(){
arr[0]=arr[1]=1;
for(int i=2;i<1010;i+=2) arr[i]=1;
for(int i=3;i<1010;i+=2){
        if(arr[i]==0){
    for(int j=i*i;j<1010;j=j+(2*i)){
         arr[j]=1;
    }
        }
}
}
int main(){
int n,ans;
cin>>n;
sieve();
//for(int i=1;i<=15;i++)
//{''cout<<arr[i]<<endl;
//}
if(arr[n]==1){
    for(int i=n+1;i<1010;i++){
      if(arr[i]==0){
        ans=i;
        break;
      }

    }
    cout<<ans<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;

    }
    cout<<1<<" "<<n<<endl;
    int cont=0;
    for(int i=1; ;i++){
        int t=i;
        if(cont==(ans-n)) break;
        if(brr[t]==0){
                cont++;
                brr[t]=brr[t+2]=1;
        cout<<t<<" "<<t+2<<endl;
        }
//cout<<n<<" "<<n+2<<endl;
    }

}
else {
 cout<<n<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;
    }
     cout<<1<<" "<<n<<endl;
}
return 0;
}
