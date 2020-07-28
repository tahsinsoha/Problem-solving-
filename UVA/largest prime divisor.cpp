#include<bits/stdc++.h>
#define ll long long
#define mx 10000007
using namespace std;
bool arr[mx];
vector<ll> prime;

void sieve()
{
	arr[0]=arr[1]= 1;
    prime.push_back(2);

    for(ll i=3;i<mx;i+=2)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(ll j=i*i;j<mx;j+=(2*i))
                arr[j]= 1;
        }
    }
}
int main(){

ll n,m;
sieve();
//for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
   // cout<<endl;
while(cin>>n && n!=0){
        if (n < 0) n = -n;
        ll c=0;
        //vector<ll>v;
for(ll i=0; i<prime.size();i++){
        if(n<prime[i]) break;
    if(n%prime[i]==0) {
          c++;
          m=prime[i];
				while (n%m == 0) n /= m;
          //v.push_back(prime[i]);
    }
}
if(n!=1){
    m=n;
    c++;
}
//sort(v.begin(),v.end());
//if(prime[n]==0) cout<<n<<endl;
 if(c==1 || c<1) cout<<-1<<endl;

 else cout<<m<<endl;

}
return 0;
}

