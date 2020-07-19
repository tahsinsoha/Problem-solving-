#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
long long n;
cin>>n;
long long k=0;

while(k*10+9<=n) k=k*10+9;

n = n-k;
long long sum=0;
while(n>0){

    long long r = n%10;
     n/=10;

     sum+=r;

}

while(k>0){

    long long r = k%10;
     k/=10;

     sum+=r;

}

cout<<sum<<endl;
    return 0;
}











