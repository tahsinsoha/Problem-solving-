#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10];// a[]={'N','a','m','i','r','a','h','\0'};
    scanf("%s",a);

    int sum=0;
    int i;

    for(i=0; a[i]!='\0'; i++)
    {
        sum=sum+1;

    }

    printf("%d",sum);


    return 0;
}

