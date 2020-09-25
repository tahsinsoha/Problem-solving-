#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--)
    {
        int n;

        cin>>n;

        vector<long long>neg,pos,tot;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(x<0)
                neg.push_back(x);
            else
                pos.push_back(x);
        }

        if(pos.size()==0)
        {
            sort(neg.begin(),neg.end(),greater<int>());
            long long prod=1;
            for(int i=0; i<5; i++)
            {
                prod*=neg[i];

            }
            cout<<prod<<endl;
            continue;


        }



        sort(neg.begin(),neg.end());
        sort(pos.begin(),pos.end(),greater<int>());

        int z = neg.size();
        int w = pos.size();

        for(int i=0; i<min(5,z); i++)
            tot.push_back(neg[i]);

        for(int i=0; i<min(5,w); i++)
            tot.push_back(pos[i]);

        if(neg.size()>5)
            tot.push_back(neg[neg.size()-1]);

        long long maxx=LLONG_MIN;



        for(int i=0; i<tot.size(); i++)
        {
            for(int j=i+1; j<tot.size(); j++)
            {
                for(int k=j+1; k<tot.size(); k++)
                {
                    for(int l=k+1; l<tot.size(); l++)

                    {
                        for(int m=l+1; m<tot.size(); m++)
                        {
                            maxx=max(maxx,(tot[i]*tot[j]*tot[k]*tot[l]*tot[m]));
                        }
                    }
                }
            }
        }

        cout<<maxx<<endl;



    }


    return 0;

}









