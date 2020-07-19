#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int flag=0;
    int sum,j=0;
   // n++;
    for(int k=n;n>=0;n--)
    {
        int sum=0;
        //j=j+1;
        for(int i=(n-1); i>=j; i--)
        {
            sum=sum+a[i];

        }
        if((sum%2)!=0)
        {
        printf("%d",sum);
        return 0;
        //flag=1;
       // break;

        }
        else
        {
        j=j+1;
            //j=j+1;
            //continue;
        }
   //continue;

    }

      if(sum%2==0){printf("0 %d",sum);}
    return 0;
}
