#include <bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long  int brr[200007];
long long int a[200007];
long long int b[200007];
int main()
{

    int t;
long long a,b;
cin>>t;
    while(t--){

        cin>>a>>b;

        if(a==b) {
            cout<<0<<endl;
            continue;
        }

        if(a<b){

            if((b-a)%2) {
                cout<<1<<endl;
                continue;
            }

            else {

                cout<<2<<endl;
                continue;
            }
        }


        else if(a>b){

            if((a-b)%2) {
                cout<<2<<endl;
                continue;
            }

            else {

                cout<<1<<endl;
                continue;
            }
        }
    }

}






