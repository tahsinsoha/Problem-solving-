#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long int>array;
    long long  input,n;
    while(cin>>input)
    {
        array.push_back(input);
        n=array.size();
        //sort(array.begin(),array.end());
        sort(array.begin(),array.end());
            if((n-1)==0)
            {
                printf("%lld\n",array[(n-1)]);
            }
            else if((n-1)%2==0)
            {
                printf("%lld\n",array[(n-1)/2]);
            }
            else
            {
                long long int k=array[n/2];
                long long int l=array[(n-2)/2];
               long long int m= (k+l)/2;

                printf("%lld\n",m);
            }

        }

    return 0;
}
