#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
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
         int k=n;
    n++;
    while(n--)
    {
        int sum=0;
        //j=j+1;
        for(int i=(k-1); i>=j; i--)
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
            continue;
        }
       // if(flag==1){break;}
    }

      if(sum%2==0){printf("0");}
    return 0;
}

