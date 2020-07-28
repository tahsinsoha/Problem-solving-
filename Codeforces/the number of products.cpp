#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[200007];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
   long long int pos=0,neg=0;
   long long int p=0,ng=0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>0)
            pos++;
        else
        {
            swap(pos,neg);
            neg++;
        }
        p+=pos;
        ng+=neg;
    }

    cout<<ng<<" "<<p<<endl;
    return 0;
}












