#include<iostream>
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
    int sum=0,j,k;
    for(j=0; j<n; j++)
    {
        if(a[j]%2!=0)
            flag=1;
        break;

    }
    sum=0;
    if(flag==1)
    {

        for(k=0; k<n; k++)
        {
            sum=sum+a[k];

        }
        for(int l=0; l<n; l++)
        {
            if(a[l]%2!=0)
            {
                sum=sum-a[l];
                printf("%d",sum);
                break;
            }


        }


    }
    else
    {
        printf("0");
    }
    return 0;

}


