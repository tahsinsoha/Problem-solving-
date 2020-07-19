#include <bits/stdc++.h>
#define ull unsigned long long
#define MAX 1000003
using namespace std;

int arr[MAX];


void sieve(void)
{
    arr[0]=1;
    arr[1]=1;
    for(ull i=2;i<MAX;i++)
    {
        if(arr[i]==0)
        {

            for(ull j=2;i*j<MAX;j++)
                if(arr[i*j]==0)
                    arr[i*j]=i;

        }
    }

}



int main()
{
    sieve();
    //cout<<arr[15]<<endl;



    int n,k;
    int t;
    cin>>t;
    while(t--){

        cin>>n>>k;

     if(n%2==0) cout<<2*k+n<<endl;
      else if(arr[n]==0) cout<<n*2+(k-1)*2<<endl;

      else cout<<n+(arr[n])+(k-1)*2<<endl;


    }
}
