#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int n;
    cin>>n;
    int a;
    deque<int>dq;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        dq.push_back(a);
    }
    int cnt1 = 0, cnt2 = 0;
    long long sum1=0,sum2=0;
    while(!dq.empty())
    {

        if(sum1==sum2)
        {
            if(dq.size()==1)
                {
                    cnt1++;
                    sum1+=dq.front();
                    dq.pop_front();

                }

            else
            {
                cnt1++;
                cnt2++;
                sum1+=dq.front();
                sum2+=dq.back();
                dq.pop_front();
                dq.pop_back();
            }
        }

        else if(sum1<sum2){
            cnt1++;
            sum1+=dq.front();
            dq.pop_front();
        }

        else {

              cnt2++;
            sum2+=dq.back();
            dq.pop_back();
        }


    }

    cout<<cnt1<<" "<<cnt2<<endl;

    return 0;
}






