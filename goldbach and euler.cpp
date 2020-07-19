#include<bits/stdc++.h>
#define mx  100000007
using namespace std;
bool arr[mx];
void sieve()
{
    arr[0]=arr[1]=1;
    for(long long i=2;i<mx;i=i+2) arr[i]=1;
    for(long long int i=3; i<mx; i=i+2)
    {
        if(!arr[i])
        {
            for(long long int j=(i*i); j<mx; j=j+(2*i))
                arr[j]=1;
        }
    }

}
int main()
{
long long int n;
//for(int i=2;i<=15;i++){
    //cout<<arr[i]<<endl;
//}
sieve();
while(cin>>n){
        int flag = 0;
    if(n%2!=0){
     if(arr[n-2]==0 &&(n-2)>0)
       {

        cout<<n<<" is the sum of "<<2<<" and "<<n-2<<"."<<endl;
        flag=1;
       }
    // else cout<<n<<" is not the sum of two primes!"<<endl;
    }
else if(n%2==0){
for(long long int i=n/2+1;i<n;i++){
    if(arr[i]==0 && arr[n-i]==0 ){
        cout<<n<<" is the sum of "<<n-i<<" and "<<i<<"."<<endl;
    flag=1;
    break;
    }

}
}
if(flag==0) cout<<n<<" is not the sum of two primes!"<<endl;
}

    return 0;
}
