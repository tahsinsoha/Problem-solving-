#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
     int gc;
    int flag=0;
    for(int i=1;;i++){

if(flag==0){
      gc = __gcd(a,n);
    n= n-gc;
    flag=1;
    //cout<<n<<endl;

}

else if(flag==1){
      gc = __gcd(b,n);
    n= n-gc;
    flag=0;
   // cout<<n<<endl;

}

 if(n==0){
                break;
            }

    }

    cout<<1-flag<<endl;
    return 0;
}






