#include <bits/stdc++.h>
#define pdd pair <double, double >
using namespace std;
int main()
{
        pdd points;
        set <pdd> s;
        set <pdd> ::iterator it;
        map<pdd, int> mpp;
    double x1,x2,x3,x4,y1,y2,y3,y4;
    while( cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4 )
    {

        s.insert(pdd(x1,y1));
        mpp[pdd(x1,y1)]++;
        s.insert(pdd(x2,y2));
        mpp[pdd(x2,y2)]++;
        s.insert(pdd(x3,y3));
        mpp[pdd(x3,y3)]++;
        s.insert(pdd(x4,y4));
        mpp[pdd(x4,y4)]++;
        pdd same;
        for(it=s.begin();it!=s.end();it++)
        {
            if( mpp[pdd(it->first, it->second)]==2 )
            {
                same.first=it->first;
                same.second=it->second;
            }

        }
        pdd p[2];
        int i=0;
        for(it=s.begin();it!=s.end();it++)
        {
            if(i==2)
                break;
            if(mpp[pdd(it->first, it->second)]==1)
            {
                p[i].first=it->first;
                p[i].second=it->second;
                i++;
            }
        }
//        cout<<setprecision(3)<<fixed<<same.firs<<" "<<setprecision(3)<<fixed<<same.second<<endl;
        double x= p[0].first+p[1].first-same.first;
        double y= p[0].second+p[1].second-same.second;
        cout<<setprecision(3)<<fixed<<x<<" "<<setprecision(3)<<fixed<<y<<endl;
        mpp.clear();
        s.clear();
    }
}
