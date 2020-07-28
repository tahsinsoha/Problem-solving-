#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,beef,bun,ch,i,j,burg;
    int h,c;
    int sum=0;
    int temp;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        cin>>bun>>beef>>ch;
        cin>>h>>c;
        sum=0;

burg = bun/2;

if(c>h){
int m = min(burg,ch);
        sum=sum+ c*m;
        int n= min((burg-m),beef);
 sum = sum + h*n;


cout<<sum<<endl;
}
else {
int m = min(burg,beef);
        sum=sum+ h*m;
        int n= min((burg-m),ch);
 sum = sum + c*n;


cout<<sum<<endl;

}

    }

    return 0;
}

