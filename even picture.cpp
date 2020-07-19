#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   cout<<3*n+4<<endl;
   cout<<0<<" "<<0<<endl;

   cout<<0<<" "<<1<<endl;
   int tmp = 0;
   int p;
   for(int i=1;i<=n;i++){
            p=tmp;
       for(int j=1;j<=3;j++){

        cout<<i<<" "<<tmp<<endl;
        tmp++;
       }
       p++;
       tmp=p;


   }
cout<<n+1<<" "<<n<<endl;

cout<<n+1<<" "<<n+1<<endl;

    return 0;

}

