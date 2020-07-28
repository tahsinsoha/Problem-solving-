#include<bits/stdc++.h>
#define ll long long
#define mx 1000007
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
int n;
sieve();
while(cin>>n && n){
        int c=0;
for(int i=0; i<prime.size();i++){
    if(n%prime[i]==0) c++;
}
 printf("%d : %d\n", n, c);

}
return 0;
}
