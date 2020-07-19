#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
vector<long long int>prime;
int arr[1000010];
int brr[1000010];
void sieve()
{
     arr[0]=arr[1]=1;
    for(long long int i=2; i<=mx; i++)
    {
        if(!arr[i])
        {
              prime.push_back(i);
            for(long long int j=i*2; j<=mx; j=j+i)
            {
                arr[j]=1;
            }
        }
    }

}


int main()
{
   int n;
set<int>s;

cin>>n;
sieve();
for(int i=2;i<=n+1;i++){
    if(arr[i]==0)
        brr[i]=1;

    else brr[i]=2;

    s.insert(brr[i]);

}
cout<<s.size()<<endl;

for(int i=2;i<=n+1;i++){
  cout<<brr[i]<<" ";
}
cout<<endl;
    return 0;
}








