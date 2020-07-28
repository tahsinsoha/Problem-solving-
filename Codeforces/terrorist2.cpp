#include<bits/stdc++.h>
# define MAX 1000003
# define ll long long
using namespace std;
int arr[MAX];


void sieve(void)
{
    arr[0]=1;
    arr[1]=1;
    for(ll i=2;i<MAX;i++)
    {
        if(arr[i]==0)
        {

            for(ll j=2;i*j<MAX;j++)
                if(arr[i*j]==0)
                    arr[i*j]=1;

        }
    }

}

int main(){
int t,l,h;
sieve();
cin>>t;

for(int i=1;i<=t;i++){
    cin>>l>>h;

    int m=0,flag=0;
    for(int j=l;j<=h;j++){
        int div=0;
        for(int k=1;k<=j;k++){
            if(j%k==0) div++;
        }
        if(!arr[div]){
                flag=1;
            m++;
              if(m==1) cout<<j;
              else cout<<" "<<j;
        }
    }
                if(flag==0)  cout<<-1<<endl;
                else cout<<endl;
}
return 0;
}
