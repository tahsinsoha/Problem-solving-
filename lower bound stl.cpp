#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,i,m,input,input2,j,flag,k;
    cin>>n;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cin>>m;
    for(j=0; j<m; j++)
    {
        cin>>input2;

                vector<int>::iterator low1;
                low1 = lower_bound(v.begin(), v.end(), input2);
                if(*low1==input2){
                cout<<"Yes ";
                cout<<(low1 - v.begin()+1)<<endl;

                }


                else {
                    cout<<"No ";
                      cout<<(low1 - v.begin()+1)<<endl;

                }
        }




    return 0;
}
