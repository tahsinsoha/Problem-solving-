#include<bits/stdc++.h>
using namespace std;
int arr[]= {1,1,1,1,1,1,1,1,1,1};
int main()
{
    long long k;
    cin>>k;
    string s = "codeforces";

    long long int p = 1;

    while(p<k)
    {

        for(int i=0; i<10; i++)
        {
            p/=arr[i];
            arr[i]++;
            p*=arr[i];
            if(p>=k)
                break;

        }
    }

    for(int i=0; i<10; i++)
    {

        string t(arr[i],s[i]);
        cout<<t;
    }


    return 0;

}



