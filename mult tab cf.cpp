#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
int cnt =0;
    for(int i=1; i<= sqrt(x);i++){
            if(x%i==0 && x/i<=n){
                if(i*i ==x) cnt+=1;
                else cnt+=2;

            }

    }
cout<<cnt<<endl;
    return 0;
}






