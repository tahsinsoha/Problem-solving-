#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,input;
    int sum;
    vector<int>array;
    //cin>>n;
    for(k=1;;k++)
    { int sum1=0;

        cin>>n;
        if(n==0)
        {
            return 0;
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                cin>>input;
                array.push_back(input);
                sort(array.begin(),array.end());



            }
            for(i=0;i<(n-1);i++){
                sum=sum1+array[i]+array[i+1];
                 sum1=sum;

            }
            printf("%d",sum);
        }
    }

    return 0;
}

